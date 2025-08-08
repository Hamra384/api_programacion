#include "token.hpp"

int tokenCount(string s, char sep)
{
if(s.empty()) return 0;
int cont = 0;
int token = 1;
while(s.length()>cont){
   if(s[cont] == sep){
    token ++;}
    cont ++;
}
return token;
}


void addToken(string& s, char sep, string t)
{
if(!s.empty()){
s += sep;
}
s += t;
}


string getTokenAt(string s, char sep, int i){
int c = 0;
int cont=0;
string a = "";
    while(i>c){
        if(s[cont]==sep){
            c++;
        }
        cont++;
    }
    while(cont < s.length() && s[cont] != sep){
        a += s[cont];
        cont++;
    }
    return a;
}


void removeToken(string&s, char sep, int i){
int c = 0;
int cont=0;
    while(i>c){
        if(s[cont]==sep){
            c++;
        }
        cont++;
    }
    while(cont < s.length() && s[cont] != sep){
        s.erase(cont, 1);
    }
    s.erase(cont, 1);
}

void setTokenAt(string& s,char sep,string t,int i){
    removeToken(s, sep, i);
    int c = 0;
    int cont=0;
    int j = 0;
    while(i>c){
        if(s[cont]==sep){
            c++;
        }
        cont++;
    }
    while(s.length()>cont && s[cont] != sep){
        char b = t[j];
        
        cont++;
        j++;
    }
}