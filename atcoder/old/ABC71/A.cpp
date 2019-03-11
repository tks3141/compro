#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
int zet(int x){
    if(x>0){
        return x;
    }else{
        return -x;
    }
}
int main(){
    int a,b,x;
    scanf("%d %d %d",&x,&a,&b);
    if(zet(x-a)>zet(x-b)){
        cout << "B" << endl;
    }else{
        cout << "A" << endl;

    }
    
    return 0;
    
}