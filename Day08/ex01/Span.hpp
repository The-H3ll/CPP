
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span
{
    public:
        Span(unsigned int N);
        unsigned int numbers;
        int *storage;
        void addNumber(int num);
        int    longestSpan();
        int    shortestSpan();
        int len;
        int return_min(int arr[], int index);
};

#endif