#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    long long N;
    cin >> N;
    long long l[N],r[N];
    long long i;
    long long c=0;
    for(i=0;i<N;i++){
        scanf("%lld %lld",&l[i],&r[i]);
        c+=(r[i]-l[i]+1);
    }
    cout << c <<endl;
    
    return 0;
}