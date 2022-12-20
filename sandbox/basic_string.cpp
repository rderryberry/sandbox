//
//  basic_string.cpp
//  sandbox
//
//  Created by Richard Derryberry on 12/5/22.
//

#include "basic_string.h"
#include <ctype.h>
#include <iostream>
#include <string>

void reverse_string(std::string word) {
    for (int i = {(int) word.length() - 1}; i >= 0; i--) {
        std::cout << word[i];
    }
    std::cout << std::endl;
}

int find(std::string s, char c, int i) {
    while (i < s.length()) {
        if (s[i] == c) return i;
        i++;
    }
    return -1;
}

int count_char(std::string s, char c) {
    int i {0};
    int count {0};
    while (i < s.length())
    {
        int find_idx {find(s, c, i)};
        if (find_idx != -1)
        {
            count++;
            i = find_idx + 1;
        }
        else
        {
            break;
        }
    }
    return count;
}

void find_in_word(std::string word) {
    
    std::cout << "Enter character to search for in " << word << ": ";
    char search_char{};
    std::cin >> search_char;
    std::cout << "Enter index to search from: ";
    int start_idx{};
    std::cin >> start_idx;

    int find_res {find(word, search_char, start_idx)};
    if (find_res == -1) {
        std::cout << "Character " << search_char << " not found in "
        << word << " after index " << start_idx << ".\n";
    } else {
        std::cout << "Character " << search_char << " found at index "
        << find_res << ".\n";
    }
    
}

void string_to_upper(std::string& word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
}

void string_to_lower(std::string& word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
}

void display_d_o_h()
{
    std::cout << "Enter integer: ";
    int input {};
    std::cin >> input;
    std::cout << "\tDecimal rep:\t\t" << input << '\n';
    std::cout << "\tOctal rep:\t\t\t" << std::oct << input << '\n';
    std::cout << "\tHexadecimal rep:\t" << std::hex << input << '\n';
    std::cout << std::dec << '\n';
}
