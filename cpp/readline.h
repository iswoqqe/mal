#ifndef INCLUDE_READLINE_H_
#define INCLUDE_READLINE_H_

#include <string>

class ReadLine {
    public:
        ReadLine(const std::string& history_file);
        ~ReadLine();

        bool get(const std::string& prompt, std::string& line);
    private:
        std::string history_path_;
};

#endif
