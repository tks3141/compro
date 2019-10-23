#include <iostream>
#include <stdio.h>
using namespace std;
 int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    int wa=0;
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
        wa+=a[i];
    }    
    printf("%d\n",wa);



    return 0;
    
}