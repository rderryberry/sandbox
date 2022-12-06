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

int main() {
    std::string greeting {"Beginning sandbox program.\n\n"};
    std::cout << greeting;
    
    std::string test_word {"abcda"};
    std::cout << "Looking for 'a' in 'abcda'.\n";
    std::cout << "Starting at index 0: "
    << find(test_word, 'a', 0) << '\n';
    std::cout << "Starting at index 1: "
    << find(test_word, 'a', 1) << "\n\n";
    
    std::cout << "Counting 'a' in 'abcda': "
    << count_char(test_word, 'a') << '\n';
    std::cout << "Counting 'b' in 'abcda': "
    << count_char(test_word, 'b') << '\n';
    std::cout << "Counting 'x' in 'abcda': "
    << count_char(test_word, 'x') << "\n\n";
    
    
    int num { getValueFromUserUB() };
    newLine();
    std::cout << num << " doubled is: " << mult(2, num) << "\n\n";

    std::cout << "Enter word to reverse: ";
    std::string word{};
    std::cin >> word;
    reverse_string(word);
    multiNewLine(2);
    
    return EXIT_SUCCESS;
}
