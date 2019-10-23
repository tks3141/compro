#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

int a[200000],b[200000],go[200001]; 

int main(){
    long long N,ans;
    cin >> N;
    if(N<100)ans=0;
    else if(N<5001)ans=N/100;
    else if(N<30001)ans=(N/1000)+50;
    else if(N<70001)ans=((N/1000)-30)/5+80;
    else ans=89;
    if(ans<10){
        cout << 0 <<ans<<endl;
    }else{
        cout << ans << endl;
    }


    return 0;
}