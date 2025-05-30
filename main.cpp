#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
string s = "Esto es una prueba";
int pos = 7;
string r = removeAt(s,pos);
cout << r << endl; // SALIDA: Esto esuna prueba
}