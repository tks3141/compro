#include <bits/stdc++.h>
#include<iostream>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
    llong N,A,B,na,nb;
    string S;
    cin >> N>>A>>B>>S;
    llong ans[N];
    nb=0;
    na=0;
    
    for(int i=0;i<N;i++){
        if(S[i]=='a'){
            if(na<(A+B)){
                ans[i]=1;
                na++;
            }else{
                ans[i]=0;
            }
        }else if((char)S[i]=='b'){
            if(na<(A+B) && nb<B){
                ans[i]=1;
                na++;
            }else{
                ans[i]=0;
            }
            nb++;
        }else{
            ans[i]=0;
        }
    }

    for(int i=0;i<N;i++){
        printf("%s\n",(ans[i]?"Yes":"No"));
    }
    return 0;
}