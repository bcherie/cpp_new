#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

// class ArrayException : public std::exception
// {
// 	private:
// 		std::string m_error;
// 	public:
// 		ArrayException(std::string error)
// 		: m_error(error)
// 		{
// 		}

// 		const char* getError() { return m_error.c_str(); }
// } ;

template <class T>
class Array
{
private:
	T *mass;
	int len;

public:
///////////////////
	Array()
	{
		std::cout << "Constructor is called" << std::endl;
		this->len = 0;
		this->mass = NULL;
		// int *arr = new int[i];

	}

	Array(unsigned int n)
	{
		if (n > 0)
		{
			len = n;
			mass = new T[sizeof(int)*n];
		}

	}

	Array(const Array<T> &obj)
	{
		std::cout << "Copy operator" << std::endl;
		this->len = obj.size();
		return ;
	}

	T &operator=(const Array<T> &obj)
	{
		if (this != &obj)
		{
			this->len = obj.size();
		}
		return (*this);
	}
	T &operator[] (const int index)
	{
		if (index < 0 || index >= size())
			throw ArrayException("Invalid index");
		return this->mass[index];
	}

	int size()
	{
		return this->len;
	}

	~Array()
	{
		std::cout << "Destructor is called" << std::endl;
	}
//////////

	class ArrayException : public std::exception
	{
		private:
			std::string m_error;
		public:
			ArrayException(std::string error)
			: m_error(error)
			{
			}

			const char* getError() { return m_error.c_str(); }
	} ;
};

// std::ostream &operator<<(std::ostream &out, const Array<T> &obj);
#endif
