#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
long long D[2000001];
long long T[2000001];

long long zet(long long inp){
    if(inp>0){
        return inp;
    }else{
        return -inp;
    }
}

int main(){
    string S;
    cin >> S ;
    bool ok[26]={};
    int t;
    for(int i=0;i<26;i++){
        ok[i]=0;
    }
    for(int i=0;i<S.length();i++){
        t=S[i]%26;//これ重要、てかすごい
        if(ok[t]==0){
            ok[t]=1;
        }else{
            cout <<"no"<<endl;
            return 0;
        }
    }
    cout <<"yes"<<endl;
    return 0;
}