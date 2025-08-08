#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
using namespace std;


int tokenCount(string s, char sep);
void addToken(string& s, char sep, string t);
string getTokenAt(string s, char sep, int i);
void removeToken(string& s,char sep,int i);
void setTokenAt(string& s,char sep,string t,int i);
#endif