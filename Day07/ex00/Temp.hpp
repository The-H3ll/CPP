//
// Created by Mouaad Labhairi on 12/5/21.
//

#ifndef C___TEMP_HPP
#define C___TEMP_HPP


template	<typename T>
void	swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template	<typename T>
T	min(const T &a, const T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template	<typename T>
T	max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif //C___TEMP_HPP
