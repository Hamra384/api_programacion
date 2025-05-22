#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
string s = "John|Paul|George|Ringo";
int p = indexOfN(s,'|',1);
cout << p << endl; // muestra: 4
p = indexOfN(s,'|',2);
cout << p << endl; // muestra: 9
p = indexOfN(s,'|',3);
cout << p << endl; // muestra: 16
}