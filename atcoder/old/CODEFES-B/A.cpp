#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long N,A;
    string inp;
    cin >> N ;;
    if(N==9 || N%10==9 || N/10==9){
        cout <<"Yes"<<endl;
        return 0;
    }else{
        cout <<"No" <<endl;
        return 0;
    }
    

    return 0;
}