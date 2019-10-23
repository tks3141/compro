#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
long long D[2000001];
long long T[2000001];

long long zet(long long inp){
    if(inp>0){
        return inp;
    }else{
        return -inp;
    }
}

int main(){
    long long N,M,c=0;
    cin >> N ;
    //long long D[N];
    for(int i=0;i<N;i++){
       scanf("%lld",&D[i]);
    }
    //long long T[M];
    cin >> M;
    for(int i=0;i<M;i++){
        scanf("%lld",&T[i]);
    }
    sort(D,D+N);
    sort(T,T+M);
    long long ind=0;
    for(long long i=0;i<M;i++){
        while(ind<N){
            if(D[ind]==T[i]){
                ind++;
                c++;
                break;
            }
            ind++;
        }
        /*これは一部だめだった
        if(i==(M-1) && D[ind-1]==T[i]){
            cout << "YES" <<endl;
            return 0;
        }
        */
    }
    if(c==M){
        cout << "YES" << endl;
    }else{
        cout << "NO"<<endl;
    }

    
    return 0;
}