#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
 
#define MAX 1000000001
static bool say[MAX]={0};

int main(){
    int N;
    cin >> N;
    //long long n[N];
    long int n;
    int i;
    long int c=0;
    for(i=0;i<N;i++){
        scanf("%ld",&n);
        if(say[n]==true){
            say[n]=false;
            c--;
        }else{
            say[n]=true;
            c++;
        }
    }
    
    cout << c <<endl;
    
    return 0;
}