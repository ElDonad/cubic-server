pipeline {
    agent none

    options {
        timestamps()
    }

    stages {
        stage('Build Release with tests') {
            parallel {
                stage('GNU/Linux') {
                    agent {
                        label "cubic-gnu"
                    }
                    options {
                        timeout(time: 30, unit: 'MINUTES')
                    }
                    stages {
                        stage ('Build GNU/Linux') {
                            steps {
                                cache(defaultBranch: 'master', caches: [arbitraryFileCache(path: 'build', cacheName: 'gnu-master-cache')]) {
                                    sh '''
                                    mkdir -pv build
                                    cd build
                                    find . -name CMakeCache.txt -delete
                                    cmake -DCMAKE_BUILD_TYPE=Release -DGTEST=1 -DUSE_CLANG=1 -DCMAKE_CXX_COMPILER_LAUNCHER=ccache -DNO_GUI=1 ..
                                    mkdir -pv cache
                                    CCACHE_DIR=$(pwd)/cache make -j6
                                    cp CubicServer CubicServer_x86-64_GNULinux_dev
                                    '''
                                }
                            }
                        }
                        stage ('Test GNU/Linux') {
                            steps {
                                sh '''
                                cd build
                                ctest -T test --no-compress-output
                                '''
                            }
                        }
                    }
                    post {
                        always {
                            archiveArtifacts (
                                artifacts: 'build/Testing/**/*.xml, build/CubicServer_x86-64_GNULinux_dev',
                                allowEmptyArchive: true,
                                fingerprint: true
                            )
                            xunit (
                                testTimeMargin: '3000',
                                thresholdMode: 1,
                                thresholds: [
                                skipped(failureThreshold: '0'),
                                failed(failureThreshold: '0')
                                ],
                            tools: [CTest(
                                pattern: 'build/Testing/**/*.xml',
                                deleteOutputFiles: true,
                                failIfNotNew: false,
                                skipNoTestFiles: true,
                                stopProcessingIfError: true
                                )]
                            )

                            // Clear the source and build dirs before next run
                            deleteDir()
                        }
                    }
                }
                stage('MUSL/Linux') {
                    agent {
                        label "cubic-musl"
                    }
                    options {
                        timeout(time: 30, unit: 'MINUTES')
                    }
                    stages {
                        stage ('Build MUSL/Linux') {
                            steps {
                                cache(defaultBranch: 'master', caches: [arbitraryFileCache(path: 'build', cacheName: 'musl-master-cache')]) {
                                    sh '''
                                    mkdir -pv build
                                    cd build
                                    find . -name CMakeCache.txt -delete
                                    rm -rf _deps
                                    cmake -DCMAKE_BUILD_TYPE=Release -DGTEST=1 -DUSE_CLANG=1 -DCMAKE_CXX_COMPILER_LAUNCHER=ccache -DNO_GUI=1 ..
                                    mkdir -pv cache
                                    CCACHE_DIR=$(pwd)/cache make -j6
                                    cp CubicServer CubicServer_x86-64_MUSLLinux_dev
                                    '''
                                }
                            }
                        }
                        stage ('Test MUSL/Linux') {
                            steps {
                                sh '''
                                cd build
                                ctest -T test --no-compress-output
                                '''
                            }
                        }
                    }
                    post {
                        always {
                            archiveArtifacts (
                                artifacts: 'build/Testing/**/*.xml, build/CubicServer_x86-64_MUSLLinux_dev',
                                allowEmptyArchive: true,
                                fingerprint: true
                            )
                            xunit (
                                testTimeMargin: '3000',
                                thresholdMode: 1,
                                thresholds: [
                                skipped(failureThreshold: '0'),
                                failed(failureThreshold: '0')
                                ],
                            tools: [CTest(
                                pattern: 'build/Testing/**/*.xml',
                                deleteOutputFiles: true,
                                failIfNotNew: false,
                                skipNoTestFiles: true,
                                stopProcessingIfError: true
                                )]
                            )

                            // Clear the source and build dirs before next run
                            deleteDir()
                        }
                    }
                }
            }
        }
    }
    post {
        always {
            withCredentials([
            string(
                credentialsId: 'WEBHOOK_CUBICMC_BUILD',
                variable: 'WEBHOOK'
            )
            ]) {
                discordSend(
                    webhookURL: WEBHOOK,
                    title: "${env.JOB_BASE_NAME} #${env.BUILD_NUMBER}",
                    result: currentBuild.currentResult,
                    description: "**Build:** ${env.BUILD_NUMBER}\n**Status:** ${currentBuild.currentResult}\n\u2060", /* word joiner character forces a blank line */
                    enableArtifactsList: true,
                    showChangeset: true
                )
            }
        }
    }
}
