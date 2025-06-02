#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
char c = '8';
if( isLetter(c) )
{
cout << c << " es letra" << endl; // SALIDA
}
c = 'x';
if( !isLetter(c) )
{cout << c << " NO es letra" << endl; // SALIDA
}
}