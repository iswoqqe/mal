#include <iostream>
#include <string>

std::string& READ(std::string& input)
{
    return input;
}

std::string& EVAL(std::string& input)
{
    return input;
}

std::string& PRINT(std::string& input)
{
    return input;
}

std::string& rep(std::string& input)
{
    return PRINT(EVAL(READ(input)));
}

int main()
{
    const std::string prompt = "user> ";
    std::string input;

    std::cout << prompt;

    while (std::getline(std::cin, input)) {
        std::cout << rep(input) << std::endl;
        std::cout << prompt;
    }
}
