#include <iostream>
#include "strings.hpp"

using namespace std;

int main() {
    string s = "Hola";
    int n = length(s);
    cout << n << endl; // Debería mostrar: 4
    return 0;
}