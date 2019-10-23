#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if((A+B)%3 ==0 || A%3==0 || B%3==0){
    cout << "Possible" << endl;

    }else{
        cout << "Impossible" << endl;
    }    


    return 0;
    
}