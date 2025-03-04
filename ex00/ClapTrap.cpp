#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
{
    this->_name = name;
    this->_health = 10;
    this->_energy = 10;
    this->_attack_dmg = 0;


    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
    *this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap& obj)
{
    this->_attack_dmg = obj.getAttackDmg();
    this->_energy = obj.getEnergy();
    this->_health = obj.getHealth();
    this->_name = obj.getName();

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy <= 0 || this->_health <= 0)
        return ;

    this->_energy--;

    std::cout << "ClapTrap " << this->_name << " attacks " << target << 
            ", causing " << this->_attack_dmg << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energy <= 0 || this->_health <= 0)
        return ;

    this->_health -= amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy <= 0 || this->_health <= 0)
        return ;

    this->_energy--;

    this->_health += amount;

}

void ClapTrap::Debug()
{
    std::cout << "Name: " << this->_name << 
            " | Health: " << this->_health << 
            " | Energy: " << this->_energy << 
            " | Attack dmg: " << this->_attack_dmg << std::endl;
}

//Getters

int ClapTrap::getAttackDmg() const
{
    return this->_attack_dmg;
}

int ClapTrap::getEnergy() const
{
    return this->_energy;
}

int ClapTrap::getHealth() const
{
    return this->_health;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}