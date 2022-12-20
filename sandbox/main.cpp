//
//  main.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include "basic_math.h"
#include "basic_string.h"
#include "newlines.h"
#include <cstdlib> // Contains EXIT_SUCCESS and EXIT_FAILURE
#include <ctype.h>
#include <iostream>
#include <string>

// User input test function
int getValueFromUserUB()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}

char getCharFromUser()
{
    std::cout << "Enter a character: ";
    char input{};
    std::cin >> input;
    return input;
}

std::string getStringFromUser()
{
    std::cout << "Enter a word: ";
    std::string input{};
    std::cin >> input;
    return input;
}

int main() {
    std::string greeting {"Beginning sandbox program.\n\n"};
    std::cout << greeting;

    std::string word{};
    word = getStringFromUser();
    string_to_upper(word);
    std::cout << word << '\n';
    string_to_lower(word);
    std::cout << word << '\n';
    
    display_d_o_h();
    
    return EXIT_SUCCESS;
}
