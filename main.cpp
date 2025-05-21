#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
   string s = "Esto e";
int p = indexOf(s,'e');
cout << p << endl; // muestra: 5
p = indexOf(s,'X');
cout << p << endl; // muestra: -1
}