#include<iostream>
#include<regex>
#include<string>
#include<bits/stdc++.h>
//#include "keywordsList.h"
using namespace std;
int main() {
    string datatype;
    string temp;
    //string keywords;
   // keywords = func();
    string keywords[116] = {"alignas","alignof","and","and_eq","asm","atomic_cancel","atomic_commit","atomic_noexcept","auto(1)","bitand","bitor","bool","break","case","catch","char","char16_t","char32_t","class(1)","compl","concept","const","constexpr","const_cast","continue","co_await","co_return","co_yield","decltype","default(1)","delete(1)","do","double","dynamic_cast","else","enum","explicit","export(1)","extern(1)","false","float","for","friend","goto","if","import","inline(1)","int","long","module","mutable(1)","namespace","new","noexcept","not","not_eq","nullptr","operator","or","or_eq","private","protected","public","reflexpr","register(2)","reinterpret_cast","requires","return","short","signed","sizeof(1)","static","static_assert","static_cast","struct(1)","switch","synchronized","template","this","thread_local","throw","true","try","typedef","typeid","typename","union","unsigned","using(1)","virtual","void","volatile","wchar_t","while","xor","xor_eq","override","final","audit","axiom","transaction_safe","transaction_safe_dynamic","if","elif","else","endif","defined","if","def","ifndef","define","undef","include","line","error","pragma"};
    int i;
    cout<<"enter a identifier:";
    cin>>datatype;
    std::regex e("[a-zA-Z_][a-zA-Z0-9_]*"); //created a regular expression that matches an identifier to some level
    if(std::regex_match (datatype,e)){
        for(i=0;i<116;i++){
            //cout<<keywords[i];
            temp = keywords[i];
            if (temp == datatype){
                    cout<<"unvalid identifier";
                    break;
            }
            if(i==115){
                cout<<"valid identifier";
            }
        }
    }else{
        cout<<"invalid identifier";
    }
}
