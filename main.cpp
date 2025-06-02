#include <iostream>
#include "strings.hpp"

using namespace std;
int main() {
double x = 25.7;
double y = 36.9;
if( cmpDouble(x,y)<0 )
{
cout << x << " es menor que: " << y << endl;
}
}