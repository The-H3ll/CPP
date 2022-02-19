#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack> 
#include <algorithm>
#include <iterator>
#include <deque>


template <class T, class container = std::deque<T>>
class   MutantStack : public std::stack< T, container>
{
    public :
       /* MutantStack(){};
        MutantStack(const MutantStack &mutant) { *this = mutant}
        virtual ~MutantStack() {};*/
        typedef typename std::deque<T>::iterator iterator;
        iterator begin() {return(this->c.begin());};
        iterator end() {return(this->c.end());};
};

#endif