#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int count(int n,double* x,int r);

int main(int argc, char const *argv[])
{
    int n,i,r,j;
    scanf("%d",&n);
    double* x=(double*)malloc(sizeof(double)*n);
    for(i=0;i<n;i++){
        scanf("%lf",&x[i]);
    }
    for(i=0;i<21;i++){//i:階級
        int kaisu=count(n,x,i);
        printf("%2d ",i);
        for(j=0;j<kaisu;j++){
            printf("*");
        }
        printf("\n");
    }
    free(x);
    return 0;
}

int count(int n,double* x,int r)
{
    int c=0,i;
    for(i=0;i<n;i++){
        if((int)(x[i]+0.5)==r) c++;
    }
    return c;
}