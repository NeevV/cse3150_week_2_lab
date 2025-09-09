#include "parser.h"
#include <sstream>  // for std::istringstream

namespace StringUtils {

    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        // use a stringstream to split the full name by spaces
        std::istringstream iss(fullName);
        //default them to empty in case input is weird        *firstName = "";
        *lastName  = "";

        // read the first two "words"
        iss >> *firstName >> *lastName;
    }

    std::string getUsername(const std::string& email) {
        // find the @ symbol
        std::size_t at = email.find('@');
        if (at == std::string::npos) return email; // no '@' found -> just return whole thing
        return email.substr(0, at);
    }
}