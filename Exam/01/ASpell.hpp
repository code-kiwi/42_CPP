#pragma once

#include <string>
#include <iostream>

#include "ATarget.hpp"

class ASpell {
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(void);
        ASpell(const ASpell& otherASpell);
        ASpell(const std::string& name, const std::string& effects);
        virtual ~ASpell(void);

        ASpell& operator=(const ASpell& otherASpell);

        std::string getName(void) const;
        std::string getEffects(void) const;

        virtual ASpell* clone(void) const = 0;

        void launch(const ATarget& target) const {
            target.getHitBySpell(*this);
        }
};
