
#include "Span.hpp"


int     main(void)
{
    /*Span x(5);
    for (int i = 0; i < 5; i++)
    {
        x.addNumber(i);
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << x.storage[i]<< std::endl;
    } 
    try
    {
        x.addNumber(2);
        std::cout << "hello" << std::endl;
    }
    catch(std::exception)
    {
        std::cout << "Full\n";
    }*/

Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
    
}