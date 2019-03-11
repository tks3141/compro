#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
#include <vector>
#include <map>
using namespace std;
 
const long long MAX=1000000001;
vector< vector<int> >v;
//bool say[1000000001]={};
//int hen[100001][5000]={};
int main(){
    long long N;
    cin >> N;
    long long in[N];
    map<long long ,long long> mp;
    for(int i=0;i<N;i++){
        scanf("%lld",&in[i]);
        mp[in[i]]=i;
    }
    int c=0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        mp[itr->first]=c;
        c++;
    }
    for(int i=0;i<N;i++) {
        cout << mp[ in[i] ] <<endl;
    }
    
    return 0;
}