#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

template <typename T>
void easyfind(T first, int second)
{
    if (find(begin(first), end(first), second) == end(first))
        throw (std::exception());
}

#endif