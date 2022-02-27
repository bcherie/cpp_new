#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

// template <typename I3>
// void funk(I3 &arr)
// {
// 	int i = 0;
// 	int j = 0;

// 	while (arr[i])
// 		i++;
// 	while(j < i)
// 	{
// 		std::cout << "massive element: " << i << &arr[i] << std::endl;
// 		i++;
// 	}
// 	std::cout << "massive element: " << &i << std::endl;
// }

// template <typename I1, typename I2, typename I3>
// void iter(I1 *arr, I2 len, void (*funk)(I3 &arr))
// {
// 	// int i = 0;
// 	// i = arr.length();
// 	std::cout << "massive adress: " << &arr << std::endl;
// 	std::cout << "massive length: " << len << std::endl;
// 	func(arr);


// }
template <typename C>
void	funk(C &obj)
{
	std::cout << obj << std::endl;
}

// template <typename C>
// void	incr(C &obj)
// {
// 	obj++;
// }

template <typename C>
void	iter(C *adress, int lenth, void (*func)(C &obj))
{
	for (int i = 0; i < lenth; i++)
		func(adress[i]);
}

#endif
