#include<iostream>
using namespace std;
int main() {
    int Ttable[4][4]={{1,0},{0,1}}; //transition table denoting array of states
   // cout<<Ttable[0][0]; //q0, 0 => q0
    int state=0; //initial state
    string input;
    cout<<"enter a string :";
    cin>>input;
    for(int i=0;i<input.length();i++){
        state = Ttable[state][input[i]-'0'];//ascii of 0 = 48, ascii of 1 =49
    }
    if(state==0) //checking final state
        cout<<"accepted";
    else
        cout<<"rejected";
}
