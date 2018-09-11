#include<iostream>
using namespace std;
int main() {
    string line;
    int lastCharIndex;
    cout<<"enter a line of code:";
    //cin>>line;//it takes a single word only
    getline(cin,line); //takes the whole sentence along with the whitespaces
    lastCharIndex = line.length() -1 ;
    //cout<<lastCharIndex;
    if(line[0] == '/' && line[1]== '/' ){
       if( line[lastCharIndex] == '/' && line[lastCharIndex-1]=='/' ){
        cout<<"Single line comment detected.";
       }else{
        cout<<"not a comment";
       }
    }
    else if(line[0] == '/' && line[1]== '*' ){
        if( line[lastCharIndex] == '/' && line[lastCharIndex-1]=='*' ){
        cout<<"Multi line comment detected.";
       }else{
        cout<<"not a comment";
       }
    }
    else {
        cout<<"not a comment";
    }
}
