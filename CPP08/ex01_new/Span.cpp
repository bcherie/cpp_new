#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N)
{
	if (N < 1)
		throw WrongArgs();
	_N = N;
	_index = 0;
	mass = new int[_N];
}

Span::~Span()
{
	delete[] mass;
}

int		*Span::getArray() const
{
	return(mass);
}

Span::Span(const Span &obj)
{
	_N = obj._N;
	_index = obj._index;
	mass = new int[_N];
	std::copy(obj.getArray(), obj.getArray() + _N, mass);
}

Span	&Span::operator=(const Span &obj)
{
	_N = obj._N;
	_index = obj._index;
	if (mass)
		delete[] mass;
	mass = new int[_N];
	std::copy(obj.getArray(), obj.getArray() + _N, mass);
	return (*this);
}

void	Span::addNumber(int Number)
{
	if (_index < _N)
	{
		mass[_index] = Number;
		_index++;
	}
	else
		throw ArrayIsFull();
}

void	Span::addNumbers(int begin, int end)
{
	int i = _N - _index;
	int	b = std::abs(end - begin);
	std::cout << b << std::endl;
	if (begin > end || b > i)
		throw WrongArgs();
	for (int i = 0; i < b; i++)
	{
		addNumber(begin + i);
	}
}

int		Span::longestSpan()
{
	if (_index > 1)
	{
		int	i = 0;
		int	*array = new int[_N];
		std::copy(mass, mass + _N, array);
		std::sort(array, array + _N);
		i = array[_N - 1] - array[0];
		delete[] array;
		return (i);
	}
	else
		throw ArrayIsEmpty();
	return (-1);
}

int		Span::shortestSpan()
{
	if (_index > 1)
	{
		int	i = 0;
		int	*array = new int[_N];
		std::copy(mass, mass + _N, array);
		std::sort(array, array + _N);
		i = array[1] - array[0];
		delete[] array;
		return (i);
	}
	else
		throw ArrayIsEmpty();
	return (-1);
}

unsigned int	Span::getLength() const
{
	return (_N);
}

unsigned int	Span::getIndex() const
{
	return (_index);
}

const char * Span::ArrayIsEmpty::what() const throw()
{
	return ("There are no numbers stored, or only one");
}

const char * Span::ArrayIsFull::what() const throw()
{
	return ("Array is full");
}

const char * Span::WrongArgs::what() const throw()
{
	return ("Wrong args");
}
