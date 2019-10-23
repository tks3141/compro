#include <iostream>
#include <stdio.h>
using namespace std;
 int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    int max=-1;
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }    
    printf("%d\n",max);



    return 0;
    
}