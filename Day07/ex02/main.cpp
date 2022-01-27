
#include <iostream>
#include "Array.hpp"

int main()

{
    // Char
    Array <std::string> ch;
    Array <std::string> cha(3);

    cha.array[0] = "labhairi";
    cha.array[1] = "mouaad";
    cha.array[2] = "khaoula";
    for (int i = 0; i < cha.size(); i++)
    {
        std::cout << cha.array[i] << std::endl;
    } 
    ch =  cha;
    for (int i = 0; i < ch.size(); i++)
    {
        std::cout << ch[i] << std::endl;
    } 
    try
    {
        std::cout << ch[3];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array <std::string> la(ch);
    for (int i = 0; i < la.size(); i++)
    {
        std::cout << la.array[i] <<" kk" << std::endl;
    } 
    delete [] ch.array;
    for (int i = 0; i < la.size(); i++)
    {
        std::cout << la.array[i] <<" kk" << std::endl;
    } 
}