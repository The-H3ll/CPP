

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
     ClapTrap clap("kHAOULA");
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

    std::cout << "\n/****** FRAG Trap ********/\n";

    FragTrap frag;
    FragTrap frag1(" toto ");
    FragTrap frag2(" nineta ");

    frag = frag1;
    frag.attack("nineta");
    frag1.attack(" FragCasa ");
    frag2.attack("TOTO");
    frag2.highFivesGuys();
    std::cout << std::endl;
    return (0);
}