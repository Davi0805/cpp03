#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("Marvin");

    obj.attack("Luis");
    obj.Debug();
    obj.takeDamage(5);
    obj.Debug();
    obj.beRepaired(5);
    obj.Debug();

    //!TODO: TESTES PARA AVALIACOES


}