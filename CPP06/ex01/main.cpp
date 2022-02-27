#include "Serialization.hpp"

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data *ptr)
{
	ptr->name = Employee.name;
	ptr->age = Employee.age;
	ptr->number = Employee.number;
	uintptr_t i = (uintptr_t)ptr;
	return i;
}

int main()
{
	uintptr_t p;
	Data *newOne;
	std::ofstream newF("newFile");
	Data *Employee = new Data;
	p = serialize(Employee);
	newF << p;
	std::cout << p << std::endl;

	newF.close();
	newOne = deserialize(p);

	std::cout << newOne->name << std::endl;
	std::cout << newOne->age << std::endl;
	std::cout << newOne->number << std::endl;
	return 0;
}
