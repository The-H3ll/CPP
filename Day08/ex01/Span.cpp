#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->numbers = N;
    this->storage = new int[N];
    this->len = 0;
}

void    Span::addNumber(int num)
{
    static int i = 0;
    
    if (i == this->numbers)
        throw(std::exception());
    this->len +=1;
    this->storage[i] = num;
    i += 1;
}

int    Span::longestSpan()
{
    if (this->len <= 1)
        throw (std::exception());
    std::sort(this->storage, this->storage + this->len);
    int max = this->storage[this->len - 1];
    int min = this->storage[0];
    return (std::abs(max - min));
}


int    Span::return_min(int arr[], int index)
{
    int diff = INT32_MAX;
    for (int i = index + 1 ; i < this->len; i++)
    {
        int res = std::abs(arr[index] - arr[i]);
        if ( res < diff)
            diff =res;
    }
    return diff;
}

int    Span::shortestSpan()
{
    int i = 0;
    int diff = INT32_MAX;
    if (this->len <= 1)
        throw (std::exception());
    while (i < this->len)
    {
        int res = return_min(this->storage, i);
        if (res < diff)
            diff = res;
        i += 1; 
    }
    return (diff);
}

