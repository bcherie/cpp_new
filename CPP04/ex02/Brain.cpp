#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->set_ideas("too late for ideas");
	}
}
std::string Brain::get_ideas(int i) const
{
	return ideas[i];
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor" << std::endl;
	 for (int i = 0; i < 100; i++)
    {
        ideas[i] = obj.get_ideas(i);
    }
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		(void)obj;
		for (int i = 0; i < 100; i++)
    	{
			this->ideas[i] = obj.get_ideas(i);
		}
	}
	return (*this);
}

void Brain::Brain::set_ideas(std::string str)
{
	this->ideas[count] = str;
	count++;
}

Brain::~Brain()
{
	std::cout << "Brain desstructor called" << std::endl;
}
