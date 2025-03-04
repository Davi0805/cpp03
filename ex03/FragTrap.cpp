#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    setName(name);
    setHealth(100);
    setEnergy(100);
    setAttackDmg(30);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap high five called" << std::endl;
}
