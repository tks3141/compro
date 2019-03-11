#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long N;
    cin >> N;
    if(N%10==9 || (N/10)==9){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}