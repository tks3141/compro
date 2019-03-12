#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

bool getGcdList(llong x,llong y,vector<llong>& gcd_list){
    int N = min(x,y);
    FOR(i,1,N+1){
        if( ((x%i)==0 && (y%i)==0) ){
            gcd_list.push_back(i);
        }
    }
    return 0;
}

int main(){
    llong A,B,K;
    cin >> A >> B >>K;
    vector<llong> gcd_list;
    getGcdList(A,B,gcd_list);
    sort(gcd_list.begin(),gcd_list.end(),greater<llong>());
    llong ans=gcd_list[K-1];
    cout << ans << endl;
    
    
    return 0;

}