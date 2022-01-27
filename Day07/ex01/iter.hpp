//
// Created by Mouaad Labhairi on 12/5/21.
//

#ifndef C___ITER_HPP
#define C___ITER_HPP

#include <iostream>
#include <string>

template	<typename T>
void	iter(T *arr, int length, void (*f)(T const &array))
{
	for (int i = 0; i < length; i++)
	{
		f(arr[i]);
	}
}

#endif //C___ITER_HPP
