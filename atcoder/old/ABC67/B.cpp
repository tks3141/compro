#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    int l[N];
    for(int i=0;i<N;i++){
        scanf("%d",&l[i]);
    }    
    int ans=0;
    for(int i=0;i<K;i++){
        int max=0;
        int tem=0;
        for(int j=0;j<N;j++){
            if(l[j]>max){
                max=l[j];
                tem=j;
            }
            
        }
        ans=ans+max;
        l[tem]=0;
        
    }
    printf("%d\n",ans);

    return 0;
    
}