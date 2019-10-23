#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include<algorithm>
using namespace std;

int a[200000],b[200000],go[200001]; 


int main(){
    long long a,b,N;
    cin >>N;
    long long L[2*N];
    for(int i=0;i<2*N;i++){
        scanf("%lld",&L[i]);
    }
    sort(L,L+2*N);
    long long c=0;
    for(int i=0;i<2*N;i+=2){
        c+=max(L[i],L[i+1]);
    }
    cout << c <<endl;


    return 0;
}