#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
#define MAX 500000001
bool num[MAX];


long long int abs(long long x,long long y){
    long long ans=x-y;
    if(ans<0){
        ans=ans*-1;
    }
    return ans;
}

int main(){
    int N;
    long long K;
    scanf("%d %lld",&N,&K);
    long long int inp;
    long long max=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&inp);
        num[inp]=true;
        if(inp>max){
            max=inp;
        }
    }    
    
    if(num[K]==true){
        printf("POSSIBLE");
        return 0;
    }
    if(max<K){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    if(num[1]==true){
        printf("POSSIBLE\n");
        return 0;
    }
    long long i=0;
    bool change=true;
    /*
    if(N>10000 || max>10000000){
        if(rand()%2){
            printf("IMPOSSIBLE\n");
            return 0;
        }else{
            printf("POSSIBLE\n");
            return 0;
        }
    }*/
    
    while(i<max-N && change){
        change=false;
        for(long long int j=1;j<max+1;j++){
            if(num[j]==true){
                for(long long int k=1;k<max+1;k++){
                    if(num[k]==true){
                        long long tm=abs(j,k);
                        if(tm==1 || tm==K){
                            printf("POSSIBLE\n");
                            return 0;
                        }
                        if(num[tm]==false){
                            change=true;
                        }
                        num[tm]=true;
                        i++;
                    }
                }
            }
            
        }
        if(num[K]==true){
            printf("POSSIBLE\n");
            return 0;
        }
        if(num[1]==true){
            printf("POSSIBLE\n");
            return 0;
        }
    }
    printf("IMPOSSIBLE\n");
    
    return 0;
    
}