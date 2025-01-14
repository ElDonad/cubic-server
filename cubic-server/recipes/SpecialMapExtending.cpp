#include "SpecialMapExtending.hpp"
#include "logging/logging.hpp"

#include "Server.hpp"

namespace Recipe {
SpecialMapExtending::SpecialMapExtending(const nlohmann::json &recipe):
    Recipe(recipe)
{
    this->setValidity(false);
}

void SpecialMapExtending::dump(void) const { LINFO("recipe special map extending"); }

std::unique_ptr<Recipe> SpecialMapExtending::create(const nlohmann::json &recipe) { return (std::make_unique<SpecialMapExtending>(SpecialMapExtending(recipe))); }
} // namespace Recipe
