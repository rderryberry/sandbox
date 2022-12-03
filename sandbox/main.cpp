//
//  main.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include <iostream>
using namespace std;

double mult(double x, double y) {
    return x * y;
}

void newLine() {
    cout << endl;
}

void multiNewLine(int n) {
    for (int i = 0; i < n; i++) {
        newLine();
    }
}

int main() {
    return 0;
}
