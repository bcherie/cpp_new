#include <iostream>

int main(int argc, char *argv[]) {
	char character;
	int i = 0;
	int j = 0;
	char *str = NULL;
	if (argc > 1)
	{
		++(argv);
		for (int count=1; count < argc; ++count)
		{
			str = strdup(argv[j]);
			i = 0;
			while (str[i])
			{
				character = str[i];
				std::cout << (char)toupper(character);
				i++;
			}
			j++;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}
