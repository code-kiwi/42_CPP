#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(const ASpell& otherASpell): _name(otherASpell._name), _effects(otherASpell._effects) {}

ASpell::ASpell(const std::string& name, const std::string& effects): _name(name), _effects(effects) {}

ASpell::~ASpell(void) {}

ASpell& ASpell::operator=(const ASpell& otherASpell) {
    if (this != &otherASpell) {
        this->_name = otherASpell._name;
        this->_effects = otherASpell._effects;
    }
    return *this;
}

std::string ASpell::getName(void) const {
    return this->_name;
}

std::string ASpell::getEffects(void) const {
    return this->_effects;
}
