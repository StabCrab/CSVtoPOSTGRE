#include <iostream>
#include "Parser.h"
#include "sstream"
#include "windows.h"
int main()
{
    std::ifstream file;
    std::string string;
    std::cout << "Print down the name/the address of file" << std::endl;
    std::cin >> string;
    Parser parser(string);
    parser.generateScrypt();
    return 0;
}
