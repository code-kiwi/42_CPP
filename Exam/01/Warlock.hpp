#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>

class Warlock {
    private:
        const std::string _name;
        std::string _title;
        
        Warlock(void);
        Warlock(const Warlock& otherWarlock);
        Warlock& operator=(const Warlock& otherWarlock);

    public:
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();

        const std::string& getName(void) const;
        const std::string& getTitle(void) const;

        void setTitle(const std::string& title);

        void introduce() const;
};

#endif
