#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
//const long long MAX=1000000001;
//bool say[1000000001]={};

int main(){
    long long int N,M,R;
    cin >> N >> M >> R;
    long long r[R],A[M],B[M],C[M];
    //long long n;
    long long i;
    long long c=0;
    //long long n[N][M][2];
    for(i=0;i<R;i++){
        scanf("%lld",&r[i]);
    }

    for(i=0;i<M;i++){
        scanf("%lld %lld %lld",&A[i],&B[i],&C[i]);
        
    }

    
    return 0;
}