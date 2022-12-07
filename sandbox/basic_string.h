//
//  basic_string.h
//  sandbox
//
//  Created by Richard Derryberry on 12/5/22.
//

#ifndef basic_string_h
#define basic_string_h

#include <stdio.h>
#include <string>

void reverse_string(std::string word);

int find(std::string s, char c, int i);
void find_in_word(std::string word);

int count_char(std::string s, char c);

void string_to_upper(std::string& word);
void string_to_lower(std::string& word);

#endif /* basic_string_h */

