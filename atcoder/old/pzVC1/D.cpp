#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include<algorithm>
using namespace std;
 
const long long MAX=1000001;
//bool say[1000000001]={};

long long imosu[1000001];


int main(){
    long long n;
    cin >> n;
    long long a[n],b[n];
    fill(imosu,imosu+1000001,0);

    for(long long i=0;i<n;i++){
        scanf("%lld %lld",&a[i],&b[i]);
        imosu[a[i]]++;
        imosu[b[i]+1]--;
    } 
    for(long long i=0;i<MAX-1;i++){
        imosu[i+1]+=imosu[i];
    }
    long long ans=0;
    for(long long i=0;i<MAX;i++){
        ans=max(ans,imosu[i]);
    }
    cout << ans <<endl;

    return 0;
}