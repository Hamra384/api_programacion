#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

struct Equipo
{
int idEq;
char nombre[20];
int puntos;
};
struct Resultado
{
int IdEq1;
int IdEq2;
int codRes;
char estadio[20];
};
