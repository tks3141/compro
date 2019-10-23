#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
long long zet(long long inp){
    if(inp>0){
        return inp;
    }else{
        return -inp;
    }
}

int main(){
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    
    cout << A*1728+B*144+C*12+D <<endl;
    
    return 0;
}