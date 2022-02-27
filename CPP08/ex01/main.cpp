#include "Span.hpp"

int main()
{
	Span sp = Span(2);
	sp.addNumber(6);
	sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << "hello" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	// try
	// {
	// 	for (int i = 0; i < 100; i++)
	// 		sp.addNumber(i * 2);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error: "<< e.what() << '\n';
	// }

	return 0;
}
