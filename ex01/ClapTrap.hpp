#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define NAME 1
#define HEALTH 2
#define ENERGY 3
#define DAMAGE 4

class ClapTrap
{
private:
    std::string _name;
    int         _health;
    int         _energy;
    int         _attack_dmg;



public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(ClapTrap& copy);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& other);

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

    // Setters
    void setName(std::string name);
    void setHealth(int health);
    void setEnergy(int energy);
    void setAttackDmg(int attackdmg);

    void decreaseVar(int var);
    void incrementVar(int var);
};

#endif