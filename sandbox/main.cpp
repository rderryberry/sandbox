//
//  main.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include <cstdlib> // Contains EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>
using namespace std;

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
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    
    return input;
}

int main() {
    
    int num { getValueFromUserUB() };
    multiNewLine(2);
    cout << num << " doubled is: " << 2 * num << endl;
    
    return EXIT_SUCCESS;
}
