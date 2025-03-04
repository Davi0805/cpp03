#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
    /* ClapTrap obj("Marvin");

    obj.attack("Luis");
    obj.Debug();
    obj.takeDamage(5);
    obj.Debug();
    obj.beRepaired(5);
    obj.Debug(); */

    //!TODO: TESTES PARA AVALIACOES

    ScavTrap obj1("Nuno");
    obj1.Debug(); 
    obj1.attack("JOAO");
    obj1.Debug();

    obj1.guardGate();
}