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
    if(n==0){
        return -1;
    }
    int k= 0;
    int v = 0;
    while (k<n){
v++;
        if(s[v] == c){   
           k++;
        }
            
       
     
    }
       if(n>k){
            return s.length();
           }
     return v;
}

int charToInt(char c){
    if (c >= '0' && c <= '9') {
        return c - '0'; 
    } if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10; 
    }
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 10; 
    }
    
    else {
        return -1; 
    }
}

char intToChar(int i){
    if(i>= 2 && i<= 9){
        return i + '0';
}
    if (i >= 10 && i <= 35) {
        return i + 'A' -10 ; 
    }
     else {
        return -1; 
    }
}
char intToCharMin(int i){
    if(i>= 2 && i<= 9){
        return i + '0';
}
    if (i >= 10 && i <= 35) {
        return i + 'a' -10 ; 
    }
     else {
        return -1; 
    }
}
int getDigit(int n,int i){
    string s = to_string(n);
    int j = s.length();
    int k = 0; 
    char c;
    while(k <= i){
      j--;
      k++;
       
    
    }
    c = s[j];
    int b = charToInt(c);
    return b;
}

string intToString(int i){
    return to_string(i);
    
}
int potencia(int n, int p){
    int c = 0;
    int i = n;
    while(c<p-1){
       c++;
        n = i*n;
    }
    return n;
}
int stringToIntd(string){

}
int stringToInt(string s,int b){
    int c = 0;
    int d;
    int i = 0;
    int res = 0;
    int longitud = s.length();
    while(c<longitud){
    c++;
    char ca = s[longitud - 1- i];
    int digit = charToInt(ca);
    int e =digit* potencia(b, i);
    res = res+e;
    i++;
}
return res;
}
string charToString(char c) {
    return string(1, c);
}
char stringToChar(string s) {
    return s[0];
}
string stringToString(string s) {
    return s;
}
string doubleToString(double d){
  return to_string(d);  
}

bool isEmpty(string s) {
    return s == "";
}

bool startsWith(string s, string x) {
    if (x.length() > s.length()) return false;
    return s.substr(0, x.length()) == x;
}

bool endsWith(string s,string x){
    if(x.length()> s.length()) return false;
    return s.substr(s.length() - x.length()) == x;
}

bool contains(string s,char c){
    int i = 0;
    while(i<s.length()){
    i++;
    if(c==s[i]) return true;
    }
}

string replace(string s,char oldChar,char newChar){
    int i = 0;
    while(i<s.length()){
        if(oldChar == s[i]){
            s[i] = newChar;
        }
        i++;
    }
    return s;
}

string insertAt(string s,int pos,char c){
    s.resize(s.length()+1);
    int i= s.length()-1;
    while(i>pos){
        s[i]= s[i-1];
        i--;
    }
    s[pos] = c;
    
    return s;
}

string removeAt(string s,int pos){
    int i = pos;
    while(pos<s.length()){
        s[pos]=s[pos+1];
        pos++;
    }
    return s;
}

string ltrim(string s){
    while(s[0] == ' '){
        s= removeAt(s, 0);
}
    return s;
}

string rtrim(string s){
    int i = 1;
    while(s[s.length()-i] == ' '){
        s= removeAt(s,s.length()-i);
        i++;
    }
    return s;
}

string trim(string s){
    s=rtrim(s);
    s=ltrim(s);
    return s;
}

string replicate(char c,int n){
    int i= 1;
    string s = "";
    while (i<n){
        s=insertAt(s, 0, c);
        i++;
    }
    return s;
}

string spaces(int n){
    string s = replicate(' ', n);
    return s;
}

string lpad(string s,int n,char c){
    int i = s.length();
    while(i<n){
        s= insertAt(s, 0, c);
        i++;
    }
    return s;
}

string rpad(string s,int n,char c){
      int i = s.length();
    while(i<n){
        s= insertAt(s, s.length(), c);
        i++;
    }
    return s;
}

string cpad(string s,int n,char c){
int i = 0;
int j = (n-s.length())/2;
if(n>s.length()){
while(i<j){
        s= insertAt(s, s.length(), c);    
        i++;
}
i = 0;
while(i<j){
    s= insertAt(s, 0, c);    
        i++;
} }
    return s;
}

bool isDigit(char c){
    int a = charToInt(c);
    if(a>9){
        return false;
    }
    else{
    return true;
    }
}

bool isLetter(char c){
    if(!isDigit(c)){
       return true;
    }
    else{
    return false;
    }
}

int mierdini(char c){
    int j = charToInt(c);
    return j;
}

bool isUpperCase(char c){
    if (c >= 'A' && c <= 'Z'){
       return true;
    }
    else{
    return false;
    }
}

bool isLowerCase(char c){
     if(!isUpperCase(c)){
       return true;
    }
    else{
    return false;
    }
}

char toUpperCase(char c){
    int a = charToInt(c);
    c = intToChar(a);
    return c;
}

char toLowerCase(char c){
    int a = charToInt(c);
    c = intToCharMin(a);
    return c;
}

string toUpperCase(string s){
    int i = 0;
    while(i<s.length()){
        s[i]=toUpperCase(s[i]);
        i++;
    }
    return s;
}

string toLowerCase(string s){
    int i = 0;
    while(i<s.length()){
        s[i]=toLowerCase(s[i]);
        i++;
    }
    return s;
}

int cmpString(string a,string b){
    int i = 0;
    int t;
    if(a==b){
        return 0;
    }
    while(a[i] == b[i]){
        i++;
    }
    if(charToInt(a[i])<charToInt(b[i])){
        t= -1;
    }
    else{
        t = 1;
    }
    return t;
}

int cmpDouble(double a,double b){
    int t;
    if(a==b){
        return 0;
    }
    if(a>b){
        return 1;
    }
    else{
        return-1;
    }
}
#endif
//funcion stringtointd y stringtoint incompletas