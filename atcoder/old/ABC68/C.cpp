#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int a[200000],b[200000],go[200001]; 

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    //int a[M],b[M];
    int i=0;
    //int go[M];

    for(i=0;i<M;i++){
        scanf("%d %d",&a[i],&b[i]);
        go[i]=0;
    }
    for(i=0;i<M;i++){
        if(a[i]==1){
            go[b[i]]++;
        }
        if(b[i]==N){
            go[a[i]]++;
        }
    }
    for(i=0;i<M+1;i++){
        if(go[i]>=2){
            printf("POSSIBLE\n");
            return 0;
        }
    }
    cout <<"IMPOSSIBLE"<<endl;

    return 0;
}