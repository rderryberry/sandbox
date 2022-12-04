//
//  main.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include <cstdlib> // Contains EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

// Basic multiplication function
double mult(double x, double y) {
    return x * y;
}

// Newline test functions
void newLine();
void multiNewLine(int n);

// User input test function
int getValueFromUserUB()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}

int main() {
    
    int num { getValueFromUserUB() };
    multiNewLine(2);
    std::cout << num << " doubled is: " << 2 * num << std::endl;
    
    return EXIT_SUCCESS;
}
