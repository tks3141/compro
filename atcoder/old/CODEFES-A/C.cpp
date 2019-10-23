#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
const long long MAX=1000000001;
//bool say[1000000001]={};

int main(){
    int  A,B,C,D,E,F;
    cin >> A>> B>> C>> D>> E>> F;
    int a,b,c,d,maxW=0,maxG=0;
    double n,maxn=-1;//重要!
    int s,t;
    double maxE=(double)(E)/(E+100)*100;
    for(d=0;d*D<=F;d++){
        for(c=0;c*C<=F;c++){
            for(b=0;b*100*B<=F;b++){
                for(a=0;a*100*A<=F;a++){
                    if((a*100*A+b*100*B+c*C+d*D >=F || a*100*A+b*100*B+c*C+d*D==0)==0){
                        s=c*C + d*D;
                        t=a*100*A + b*100*B + c*C + d*D;
                        n=((double)s/(double)t)*100.0;
                        if(n>maxn && n<=maxE &&((a+b)!=0)){
                            maxn=n;
                            maxW=a*100*A+b*100*B;
                            maxG=c*C+d*D;
                        }
                    }
                }
            }
        }
    }

    printf("%d %d\n",maxW+maxG,maxG);
    
    return 0;
}