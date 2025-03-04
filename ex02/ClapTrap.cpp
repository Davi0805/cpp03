#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->_name = name;
    this->_health = 10;
    this->_energy = 10;
    this->_attack_dmg = 0;


    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
    this->_health = copy.getHealth();
    this->_energy = copy.getEnergy();
    this->_name = copy.getName();
    this->_attack_dmg = copy.getAttackDmg();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->_name = other.getName();
    this->_health = other.getHealth();
    this->_energy = other.getEnergy();
    this->_attack_dmg = other.getAttackDmg();

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
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

int ClapTrap::getHealth() const
{
    return this->_health;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getEnergy() const
{
    return this->_energy;
}

int ClapTrap::getAttackDmg() const
{
    return this->_attack_dmg;
}

void ClapTrap::setHealth(int health)
{
    this->_health = health;
}

void ClapTrap::setEnergy(int energy)
{
    this->_energy = energy;
}

void ClapTrap::setAttackDmg(int attackdmg)
{
    this->_attack_dmg = attackdmg;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::decreaseVar(int var)
{
    switch (var)
    {
    case HEALTH:
        this->_health--;
        break;
    case ENERGY:
        this->_energy--;
        break;
    case DAMAGE:
        this->_attack_dmg--;
        break;
    default:
        break;
    }
}

void ClapTrap::incrementVar(int var)
{
    switch (var)
    {
    case HEALTH:
        this->_health++;
        break;
    case ENERGY:
        this->_energy++;
        break;
    case DAMAGE:
        this->_attack_dmg++;
        break;
    default:
        break;
    }
}