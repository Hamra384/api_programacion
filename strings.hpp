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
int indexOf(string s, char c) {
    for (int i=0; i<s.length(); i++){
        if(s[i] == c){
            return i;
        }
            
       
     
    }
     return -1;  
}
int indexOf(string s,string toSearch){
for (int i=0; i<=s.length()-toSearch.length(); i++){
    int j = 0;
    while(j<toSearch.length()&& s[i+j] == toSearch[j]){
        j++;
        if(j=toSearch.length()){
            return i;
        }
    }

        
    
       
     
    }
     return -1;  
}
int indexOf(string s,char c,int offset){
      for (int i=0; i<s.length()- offset; i++){
        if(s[i+offset] == c){
            return i+offset;
        }
            
       
     
    }
     return -1;  
}

int indexOf(string s,string toSearch,int offset){
    for (int i=0; i<=s.length()-toSearch.length()-offset; i++){
    int j = 0;
    while(j<toSearch.length()&& s[i+j+offset] == toSearch[j]){
        j++;
        if(j=toSearch.length()){
            return i+offset;
        }
    }

        
    
       
     
    }
     return -1;  
}

int lastIndexOf(string s, char c) {
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int indexOfN(string s,char c,int n){
    if(n=0){
        return -1;
    }
    int k= 0;
    while (n<s.length()){
n++;
        if(s[n] == c){   
           k++;
           if(n>k){
            k== s.length();
           }
            
        }
            
       
     
    }
     return k;
}
#endif