#include <iostream>
#include <string>
#include "parser.h"

int main() {
    std::string fullName;
    std::string email;

    // read name + email (two lines of input)
    std::getline(std::cin, fullName);
    std::getline(std::cin, email);

    // allocate strings on the heap (lab wants us to practice new/delete)
    std::string* firstName = new std::string;
    std::string* lastName  = new std::string;

    //Parse the name + email
    StringUtils::parseName(fullName, firstName, lastName);

    std::string username = StringUtils::getUsername(email);

    // 5) Print EXACT labels the tests expect:
    std::cout << "First Name: " << *firstName << std::endl;
    std::cout << "Last Name: "  << *lastName  << std::endl;
    std::cout << "Username: "   << username   << std::endl;

    // clean up heap memory to avoid leaks
    delete firstName;
    delete lastName;

    return 0;
}