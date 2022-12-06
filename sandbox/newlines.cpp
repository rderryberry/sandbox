//
//  newlines.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/3/22.
//

#include "newlines.h"
#include <iostream>

void newLine() {
    std::cout << std::endl;
}

void multiNewLine(int n) {
    for (int i = 0; i < n; i++) {
        newLine();
    }
}
