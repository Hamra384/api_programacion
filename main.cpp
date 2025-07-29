#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
string s = "10";
int i = stringToInt(s,10);
cout << i << endl; // muestra: 10
i = stringToInt(s,2);
cout << i << endl; // muestra: 2
i = stringToInt(s,16);
cout << i << endl; // muestra: 16
s = "16";
i = stringToInt(s,12);
cout << i << endl; // muestra: 4779
}