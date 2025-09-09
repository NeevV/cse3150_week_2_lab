#ifndef PARSER_H
#define PARSER_H

#include <string>

namespace StringUtils {
    // break apart "Jane Doe" into first + last name
    //writes results back into the pointers we pass in
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName);

    // grab everything before the @ symbol in an email
    std::string getUsername(const std::string& email);
}

#endif // PARSER_H