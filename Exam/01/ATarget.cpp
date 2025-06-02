#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(const ATarget& otherATarget) {
    this->_type = otherATarget._type;
}

ATarget::ATarget(const std::string& type): _type(type) {}

ATarget::~ATarget(void) {}

ATarget& ATarget::operator=(const ATarget& otherATarget) {
    if (this != &otherATarget) {
        this->_type = otherATarget._type;
    }
    return *this;
}

const std::string& ATarget::getType(void) const {
    return this->_type;
}

void ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}
