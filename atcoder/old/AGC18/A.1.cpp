#include <iostream>
#include <stdio.h>
using namespace std;

long long getgcd(long long x,long long y){
    long long r=x%y;
    while(r!=0){
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}
int main(){
    int N;
    long long K;
    long long gcd;
    scanf("%d %lld",&N,&K);
    long long input[N];
    long long int inp;
    long long max=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&input[i]);
        if(input[i]>max){
            max=input[i];
        }
    }    
    if(max<K){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    gcd=input[0];
    for(int i=1;i<N;i++){
        gcd=getgcd(gcd,input[i]);
        if(K%gcd==0){
            printf("POSSIBLE\n");
            return 0;
        }
    }
    if(K%gcd==0){
        printf("POSSIBLE\n");
        return 0;
    }
    printf("IMPOSSIBLE\n");
       
    return 0;
    
}