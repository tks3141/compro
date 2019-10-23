#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
long long zet(long long inp){
    if(inp>0){
        return inp;
    }else{
        return -inp;
    }
}

int main(){
    long long N,K;
    cin >> N >> K;
    long long x[N];
    long long i;
    long long c=0;
    long long m;
    for(i=0;i<N;i++){
        scanf("%lld",&x[i]);
        m=min(x[i],zet(K-x[i]));
        c+=2*m;
    }
    cout << c <<endl;
    
    return 0;
}