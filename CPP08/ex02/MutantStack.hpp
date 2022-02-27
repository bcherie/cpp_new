#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <stack>
#include <deque>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack(void) : std::stack<T>()
		{
			return ;
		}
		MutantStack(const MutantStack &P) : std::stack<T>(P)
		{
			return ;
		}
		MutantStack& operator=(const MutantStack &P)
		{
			if (this == &P)
				return(*this);
			MutantStack::operator=(P);
			return (*this);
		}
		~MutantStack(void)
		{
			return ;
		}
		typename std::deque<T>::iterator begin(void)
		{
			return(MutantStack::c.begin());
		}
		typename std::deque<T>::iterator end(void)
		{
			return(MutantStack::c.end());
		}

} ;

#endif
