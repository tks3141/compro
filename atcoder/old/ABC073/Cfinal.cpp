#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
const long long MAX=1000000001;
//bool say[1000000001]={};

int main(){
    int N;
    cin >> N;
    long long n[N];
    //long long n;
    long long i;
    long long c=0;
    for(i=0;i<N;i++){
        scanf("%lld",&n[i]);
        
    }
    sort(n,n+N);
    long long temp=n[0];
    c++;
    for(i=1;i<N;i++){
        if(n[i]==temp){
            c--;
            temp=0;
        }else{
            c++;
            temp=n[i];
        }
    }
    
    cout << c <<endl;
    
    return 0;
}