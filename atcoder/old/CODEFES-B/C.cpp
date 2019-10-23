#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
#include <vector>
using namespace std;
 
const long long MAX=1000000001;
vector< vector<int> >v;
//bool say[1000000001]={};
//int hen[100001][5000]={};

int make()

int main(){
    long long N,M;
    cin >> N>> M;
    long long a[M],b[M];
    int s,t;
    //long long hen[N+1][N+1]
    int     max1 = N+1;
    int     max2 = N+1;
    for(int i=0;i<N+1;i++){
        v.push_back(vector<int>());
    }
    for(long long i=0;i<M;i++){
        scanf("%d %d",&s,&t);
        v[s].push_back(t);
        v[t].push_back(s);
        
    }
    for(int i=1;i<N+1;i++){
        
    }
    





    return 0;
}