#include <iostream>
#include <sstream>

int main()
{
    std::string str = "0.78";
    std::stringstream ss;
    ss << str;
    float result;
    ss >> result;
    std::cout << result;
        system("pause>>null");
}
