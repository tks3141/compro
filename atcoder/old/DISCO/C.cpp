#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
const long long MAX=1000000001;
//bool say[1000000001]={};

int main(){
    int  N,C;
    cin >> N>> C;
    long long L[N];
    long long s=0,f=N;
    long long c=0,nokori=N;
    long long before;
    for(int i=0;i<N;i++){
        scanf("%lld",&L[i]);
    }
    sort(L,L+N);
    for(int i=N-1;i>-1&&i>s-1;i--){
        if(L[i]+L[s]<C){
            c++;
            s++;
        }else{
            c++;
        }
    }

    cout << c <<endl;
    


    
    return 0;
}