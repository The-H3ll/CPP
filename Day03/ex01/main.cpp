

#include "ScavTrap.hpp"

int main(void)
{
     ClapTrap clap0("Labhairi");
    // ClapTrap clap1;
    // ClapTrap clap2(clap0);

     clap = ClapTrap("Casanegra");
     clap.attack("Morrocco");
     clap0.attack("Hassan");

    std::cout << "\n/****** SCAV Trap ********/\n";
    ScavTrap scav;
    ScavTrap scav1("Labhairi");
    ScavTrap scav2(scav1);

    scav = scav1;
    scav1.attack("1337"); 
    scav.attack(" casanegra ");
    scav2.attack(" casablanca ");
    scav2.guardGate();
    std::cout << std::endl;
    return (0);
}