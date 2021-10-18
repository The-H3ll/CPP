

#include <iostream>

class Zombie
{
    private:
        std::string _zombie_name;
    public:
        Zombie( std::string name );
        Zombie();
        ~Zombie();
        void    announce( void );

};

Zombie*     zombieHorde( int N, std::string name);