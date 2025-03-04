#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    setName(name);
    setHealth(100);
    setEnergy(50);
    setAttackDmg(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergy() <= 0 || getHealth() <= 0)
        return ;

    decreaseVar(ENERGY);

    std::cout << "ScavTrap " << getName() << " attacks " << target << 
            ", causing " << getAttackDmg() << " points of damage!" << std::endl;

}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}

