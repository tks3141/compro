#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long N,A;
    string inp;
    cin >> inp ;;
    //int k=inp.find("FESTIVAL");
    long long k=inp.length();
    string ans="";
    for(int i=0;i<k-8;i++){
        ans+=inp[i];
    }
    cout << ans << endl;


    return 0;
}