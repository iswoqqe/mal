#include <iostream>
#include <string>
#include <readline.h>

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
    const std::string history_file = "~/.mal_history";

    std::string input;
    ReadLine readline(history_file);

    while (readline.get(prompt, input))
        std::cout << rep(input) << std::endl;
}
