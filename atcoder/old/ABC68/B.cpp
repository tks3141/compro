#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
int main(){
    int N;
    scanf("%d",&N);
    int num[N+1];
    int max=0;
    int max_N=1;
    for(int i=1;i<N+1;i++){
        int t=0;
        int k=i;
        while(k%2==0){
            t++;
            k=k/2;
        }
        if(t>max){
            max=t;
            max_N=i;
        }
    }
    cout << max_N<< endl;

    return 0;
    
}