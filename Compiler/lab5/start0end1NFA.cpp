#include<iostream>
using namespace std;
int main(){
    int Ttable[3][2]={{1,8},{1,12},{8,8}}; //8 for null, 12 if a state transitions to 2 states.i.e. {q1,q2}
    string input;
    int state=0;//initial state
    cout<<"enter a string:";
    cin>>input;
    cout<<"Transitions:"<<endl;
    for(int i=0;i<input.length();i++){
        //input[i];
        cout<<"q"<<state<<"\t"<<input[i];
        state = Ttable[state][input[i]-'0'];
        if(state==12){
            if(i==(input.length()-1))
                state = 2;
            else
                state = 1;
        }
        cout<<"\t q"<<state<<endl;
        //accept case
        if(state==2){
            cout<<"string accepted";
            break;
        }
        //reject cases
        if(state == 8){
            cout<<"string rejected";
            break;
        }
        if(i==(input.length()-1) && state==1){
            cout<<"string rejected";
        }
    }
}
