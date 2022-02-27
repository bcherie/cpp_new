#ifndef EVERNEVER_HPP
#define EVERNEVER_HPP
#include <iostream>
template <typename T>

T max(T a, T b)
{
	return (a > b) ? a : b;
}
template <typename T>
T min(T a, T b)
{
	return (a < b) ? a : b;
}

template <typename T> void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
	// std::cout << a << '\n';
	// std::cout << b << '\n';

}

#endif
