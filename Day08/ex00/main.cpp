
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v = {1, 2, 3};
    try
    {
        easyfind(v, 0);      
        std::cout << "is found"<< std::endl;
    }
    catch(std::exception)
    {
        std::cout << "not define in container"<< std::endl;
    }
}