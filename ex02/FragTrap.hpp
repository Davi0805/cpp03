#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

//!TODO: ORTODOX CANONICAL FORM

class FragTrap : public ClapTrap
{
private:
public:
    FragTrap(std::string name);
    ~FragTrap();

    void highFiveGuys(void);
};

#endif //FRAGTRAP_HPP


