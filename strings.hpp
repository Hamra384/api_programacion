#ifndef STRINGS_HPP
#define STRINGS_HPP

#include <string>
using namespace std;

int length(string s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

#endif