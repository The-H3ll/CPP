
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>



template <class T>
class Array {
    public:
        T   *array;
        int len;
        Array();
        Array(unsigned int n);
        Array(const Array &arr);
        void    operator = (const Array &arr);
        T    operator [] (int index);
        int size();
};

template<class T>
Array<T>::Array()
{
    this->array = NULL;
    this->len = 0;
}

template<class T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    this->len = n;
}

template<class T>
Array<T>::Array(const Array &arr)
{
    this->array = new T[arr.len];
    this->len = arr.len;
    for (int i = 0 ; i < arr.len; i++)
    {
        this->array[i] = arr.array[i];
    }    
}

template<class T>
void    Array<T>::operator = (const Array &arr)
{
    this->array = new T[arr.len];
    this->len = arr.len;
    for (int i = 0 ; i < arr.len; i++)
    {
        this->array[i] = arr.array[i];
    }    
}

template <class T>
T   Array<T>::operator[] (int index)
{
    if (index < this->len && index >= 0)
        return (this->array[index]);
    else
    {
        throw (std::exception());
    }
}

template <class T>
int Array<T>::size()
{
    return (this->len);
}

#endif