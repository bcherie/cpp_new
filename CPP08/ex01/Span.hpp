#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>

class Span
{
private:
	unsigned int Num;
	unsigned int index;
	int size;
	int vect[];
	Span();
public:
	Span(unsigned int N);
	Span(const Span &obj);
	Span	&operator=(const Span &obj);
	~Span();

	void addNumber(int i);
	int shortestSpan();
	int longestSpan();
	int getMass();
};

#endif
