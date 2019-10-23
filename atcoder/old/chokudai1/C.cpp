#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
 int main(){
    int N;
    scanf("%d",&N);
    int a[N+1];
    string ans="";
    
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
        ans+= std::to_string(a[i]);
        if(i!=N-1){
            ans+=',';
        }
    }   
    
    cout << ans <<endl;



    return 0;
    
}