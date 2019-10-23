#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int merge(int* array,int p,int q,int r){//マージ関数
    int count=0,i,pi=p,qi=q+1;
    int* T=(int*)malloc(sizeof(int)*(r-p+1));
    for(i=0;i<r-p+1;i++){
        
        if(pi==q+1){
            T[i]=array[qi];
            qi++; continue;
        }else if(qi==r+1){
            T[i]=array[pi];
            pi++; continue;
        }else{
            count++;
            if(array[pi] < array[qi]){
                T[i]=array[pi];
                pi++; continue;
            }else{
                T[i]=array[qi];
                qi++; continue;
            }
        }
    }
    for(i=0;i<r-p+1;i++){
        array[i+p]=T[i];
    }
    free(T);
    return count;
}

int main(int argc, char const *argv[])
{
    int i;
    int p,q,r,n;
    scanf("%d %d %d %d",&n,&p,&q,&r);
    int* array=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int c=merge(array,p,q,r);

    printf("%d",array[0]);
    for(i=1;i<n;i++){
        printf(" %d",array[i]);
    }
    printf("\n%d\n",c);

    free(array);
    return 0;
}


