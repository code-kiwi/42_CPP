#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ATarget {
    protected:
        std::string _type;
    public:
        ATarget(void);
        ATarget(const ATarget& otherATarget);
        ATarget(const std::string& type);
        virtual ~ATarget(void);

        ATarget& operator=(const ATarget& otherATarget);

        const std::string& getType(void) const;

        virtual ATarget* clone(void) const = 0;

        void getHitBySpell(const ASpell& spell) const;
};
