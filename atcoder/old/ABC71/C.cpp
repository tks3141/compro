#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 

int main(){
    int N;
    scanf("%d",&N);
    long long int a[N];
    int i=0;
    for(i=0;i<N;i++){
        scanf("%lld",&a[i]);
    }

    sort(a,a+N);
    bool m1=0;
    bool m2=0;
    long long int max1=a[N-1];
    for(i=N-2;i>-1;i--){
        if(a[i]==max1){
            m1=true;
            break;
        }else{
            max1=a[i];
        }
    }
    long long int max2=a[i-1];
    for(i=i-2;i>-1;i--){
        if(a[i]==max2){
            m2=true;
            break;
        }else{
            max2=a[i];
        }
    }
    if(m1 && m2){
        cout <<max1*max2<<endl;
        return 0;
    }else{
        cout << 0 << endl;
        return 0;
    }
    return 0;
}