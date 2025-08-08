#include <iostream>
#include "strings.hpp"
#include "token.hpp"
using namespace std;
int main() {
string s = "John|Paul|George|Ringo";
char sep = '|';
int i = 1;
string t = "McCartney";
setTokenAt(s,sep,t,i);
cout << s << endl; // Salida: John|McCartney|George|Ringo
}