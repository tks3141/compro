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
        for(int k=0;k<i;k++){
            if(n[k]==n[i]){
                c-=2;
                n[k]=0;
                n[i]=0;
                break;
            }
        }
        c++;
    }
    
    cout << c <<endl;
    
    return 0;
}