#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> P;
const LL mod=1000000007;

int main(){
    int N;
    LL mini=mod;
    cin >> N;
    vector<LL> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
        mini=min(mini,v[i]);
    }
    cout << mini<<'\n';

    return 0;

}