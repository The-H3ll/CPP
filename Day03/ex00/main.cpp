

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap;
    ClapTrap clap0("Labhairi");
    ClapTrap clap1;
    ClapTrap clap2(clap0);

    clap = ClapTrap("Casanegra");
    clap.attack("Morrocco");
    clap0.attack("Hassan");
    clap1.attack("Mouaad");
    clap2.attack("Fatima");
    return (0);
}