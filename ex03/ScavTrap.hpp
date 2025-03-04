#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

//!TODO: ORTODOX CANONICAL FORM


class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap(std::string name);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

#endif //SCAVTRAP_HPP