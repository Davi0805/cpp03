#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

//!TODO: ORTODOX CANONICAL FORM


class ClapTrap
{
private:
    std::string _name;
    int         _health;
    int         _energy;
    int         _attack_dmg;
public:
    ClapTrap(const std::string& name);
    ~ClapTrap();

    ClapTrap(ClapTrap& copy);
    
    ClapTrap& operator=(ClapTrap& obj);

    // Mandatory Methods
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Debug Methods
    void Debug();

    // Getters
    int getHealth() const;
    int getEnergy() const;
    int getAttackDmg() const;
    std::string getName() const;
};

#endif