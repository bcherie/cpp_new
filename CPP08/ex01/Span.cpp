#include "Span.hpp"

Span::Span(unsigned int N)
{
	Num = N;
	this->index = 0;
	this->size = 0;
}

Span::Span(const Span &obj)
{
	Num = obj.Num;
	index = obj.index;
	// vect = new int[Num];
}

Span	&Span::operator=(const Span &obj)
{

	Num = obj.Num;

	return (*this);
}

int Span::getMass()
{
	return (*vect);
}

void Span::addNumber(int i)
{
	if (index < this->Num)
	{
		vect[index] = i;
		std::cout << index << ": "<< vect[index] << std::endl;
		index++;
		size++;
	}
	else
		throw std::range_error("Massive is full");
}

int Span::shortestSpan()
{
	// 2, 6, 1, 3
	int i = 0;
	int tmp = 0;
	int tmp1;
	//or find minimum numbers and compare

	while (i < size)
	{
		tmp = &vect[index] - &vect[index + 1];
		std::cout << "index: "<< index << std::endl;
		if (tmp < tmp1)
			std::cout << "diff: "<< tmp << std::endl;
		tmp1 = tmp;
		// tmp.clear();
		i++;
	}
	return tmp;
	// while (!mass.end())
}

Span::~Span()
{
}
