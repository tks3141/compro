#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double resistance(int N,int rx,int ry,int rz){
    if(N==1){
        return rx+ry+rz;
    }else{
        double rn1=resistance(N-1,rx,ry,rz);
        return (rx+((ry*rn1)/(ry+rn1))+rz);
    }// 並列部分の合成抵抗はR=xy/x+y
}

int main(int argc, char const *argv[])
{
    int rx,ry,rz,N;
    scanf("%d %d %d %d",&N,&rx,&ry,&rz);
    double R=resistance(N,rx,ry,rz);
    printf("%.3f\n",R);

    return 0;
}


