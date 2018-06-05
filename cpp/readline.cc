#include "readline.h"

#include <readline/readline.h>
#include <readline/history.h>
#include <readline/tilde.h>

ReadLine::ReadLine(const std::string& history_file) : history_path_(history_file)
{
    read_history(history_path_.c_str());
}

ReadLine::~ReadLine() {}

bool ReadLine::get(const std::string& promt, std::string& line)
{
    char* input = readline(promt.c_str());
    
    if (input == NULL)
        return false;

    add_history(input);
    append_history(1, history_path_.c_str());

    line = input;
    return true;
}

