#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long N,A;
    string S;
    cin >> S;
    if(S[0]==S[1] && S[1]!=S[2]&&S[2]==S[3]){
        cout << "Yes" << endl;
    }else{
        cout << "No"<<endl;
    }

    return 0;
}