#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

int a[200000],b[200000],go[200001]; 

int main(){
    long long N;
    cin >> N;
    map<long long,long long> mp;
    long long in[N];
    long long c=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&in[i]);
        mp[ in[i] ]=i;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        mp[itr->first]=c;
        c++;
    }
    for(int i=0;i<N;i++) {
        cout << mp[ in[i] ] <<endl;
    }



    return 0;
}