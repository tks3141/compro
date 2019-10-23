#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long A,B,C,D,N;
    scanf("%lld %lld %lld %lld %lld",&A,&B,&C,&D,&N);
    long long pa,pb,pc,pd;
    pa=A*8;
    pb=B*4;
    pc=C*2;
    pd=D;
    long long PL[4]={pa,pb,pc,pd};
    long long PL2[3]={pa/2,pb/2,pc/2};
    sort(PL,PL+4);
    sort(PL2,PL2+3);
    long long ans=0;
    if(N%2==0){
        ans=(N/2)*PL[0];
        cout << ans << endl;

        return 0;

    }else{
        ans=(N/2)*PL[0]+PL2[0];
        cout << ans << endl;

        return 0;

    }
    return 0;
}