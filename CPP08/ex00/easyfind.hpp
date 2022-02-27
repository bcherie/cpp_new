#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <string>

// leaks --atExit -- ./a.out
// T container - контейнер интов. Функция находит первое вхождение i в контейнере
// Если вхождение не найдено, нужно выбросить ошибку или вернуть ошибочное значение
template <typename T>
int easyfind(T container, int num)
{
	int j = 0;
	int i = 0;
	int find = 0;
	int flag = 0;
	int index = 0;
	// while (container[j])
	// 	j++;
	while (i < container.size() - 1)
	{
		if (container[i] == num)
		{
			// find = num;
			// index = i;
			// flag = 1;
			break;
		}
		i++;
	}
	if (i != container.size())
	{
		// return find;
		return i;
	}
	else
	{
			std::cout << "Num " << num << " wasn't found " <<  std::endl;
			throw std::range_error("Num wasn't find");
	}
}


template <typename T>
int easyfind2(T container, int num)
{
	typename T::iterator it;

	it = container.begin();

	while (it != container.end())
	{
		if(*it == num)
			return it - container.begin();
		it++;
	}
	std::cout << "Num " << num << " wasn't found " <<  std::endl;
	throw std::range_error("Num wasn't find");
	return 0;
}

#endif
