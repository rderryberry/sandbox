//
//  newlines.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include <iostream>
#include "newlines.hpp"
using namespace std;

void newLine() {
    cout << endl;
}

void multiNewLine(int n) {
    for (int i = 0; i < n; i++) {
        newLine();
    }
}
