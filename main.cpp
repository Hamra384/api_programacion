#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
int i = 12345;
string s = intToString(i);
s = s + "a";
cout << s << endl; // muestr
}