#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *argv[])
{
	std::string line;
	std::string tmp;
	std::string tmp2;
	int i = 0;
	if (ac == 4)
	{
		std::ifstream in(argv[1]);
		if (in.is_open())
		{
			std::ofstream fout("new.txt"); //create a new file
			while (getline(in, line))
			{
				if (line == argv[2])
				{
					tmp = argv[3];
					i = tmp.length();
					line.substr(0, i);
					tmp2.insert(0, argv[3]);
					i = 0;
					tmp.clear();
					fout << tmp2 << std::endl;
					tmp2.clear();
				}
				else
					fout << line << std::endl;
			}
		}
		else
			std::cout << "Файл не открыт!" << std::endl;
		in.close();
	}
	else
		std::cout << "Error arguments" << std::endl;
	return 0;
}
