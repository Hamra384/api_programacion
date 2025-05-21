#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
   string s = "esto es una garcha";
int p =  IndexOf(s,'e');
cout << p << endl; // muestra: 5
p = IndexOf(s,'X');
cout << p << endl; // muestra: -1
}