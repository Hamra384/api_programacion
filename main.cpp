#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
string s = "Hola";
int n = 0;
char c = 'X';
string r = rpad(s,n,c);
cout << "[" << r << "]" << endl; // muestra: [XXXXXXHola]
}