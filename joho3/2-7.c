#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//最小比較回数は、根の比較（定数）プラスマージ（一回n/2)
//で、T(MIN)＝n/2*log2(n)
//同様に最大は、
//Tmax(n)=n/2*log2(n)+(n-1)*log2(n/2)+...+1
//となるので、Tmax＝sigma_1^log2_n(tmin(2^i))

int tmin(int n){
    int retval=(n/2)*(int)(log(n)/log(2)+0.5);
    return retval;
}

int tmax(int n){
    int retval=0,i;
    for(i=1;pow(2,i)<n+1;i++){
        retval+=tmin(pow(2,i));
    }
    return retval;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d %d\n",tmax(n),tmin(n));
    return 0;

}