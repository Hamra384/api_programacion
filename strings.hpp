#ifndef STRINGS_HPP
#define STRINGS_HPP

#include <string>
using namespace std;

int length(string s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int charCount(string s, char c)
{
    int count = 0;
    for (char ch : s)
    {
if (ch == c){
    count++;
}
    }
    return count;
}

string substring(string s,int d,int h){
 return s.substr(d, h - d);

}
string substring(string s,int d){
    return s.substr(d, s.length());
}
int IndexOf(string s, char c) {
    for (int i=0; i<s.length(); i++){
        if(s[i] == c){
            return i;
        }
            
       
     
    }
     return -1;  
}
#endif