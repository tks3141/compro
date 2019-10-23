#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
bool ok[27];

int main(){
    string S;
    cin >> S;
    int N=S.length();
    int n=(unsigned char)('a');
    for(int i=0;i<N;i++){
        ok[(unsigned char)(S[i])-n]=true;
    }
    for (int i=0;i<26;i++){
        if(ok[i]==false){
            cout << (unsigned char)(n+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
    
}