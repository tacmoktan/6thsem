#include<iostream>
using namespace std;
int main()
{
    int Ttable[4][2]= {{1,3},{0,2},{3,1},{2,0}};
    int state=0; //initial state;
    string input;
    cout<<"enter a string:";
    cin>>input;
    cout<<"Transition:"<<endl;
    for(int i=0;i<input.length();i++){
        cout<<"q"<<state<<"\t"<<input[i]<<"\t";
        state= Ttable[state][input[i]-'0'];//difference between the characters ascii value takes place;
        cout<<"q"<<state<<endl;
    }
    if(state==2)
        cout<<"accepted";
    else
        cout<<"rejected";
}
