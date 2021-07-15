#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF (long long)1 << 61
#define MOD 1000000007
using namespace std;

typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<int> IV;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main() {
	int n;cin >> n;
    vector<int> v(n);
    REP(i,n) cin >> v[i];
    vector<P> v0(100001),v1(100001);
    REP(i,100001){v0[i]=make_pair(i,0);v1[i]=make_pair(i,0);}
    REP(i,n){
        if(i%2==0){
            v0[v[i]].second++;
        }else{
            v1[v[i]].second++;
        }
    }

    sort(v0.begin(),v0.end(),[=](P x,P y){return x.second > y.second;});
    sort(v1.begin(),v1.end(),[=](P x,P y){return x.second > y.second;});

    // cout << v0[0].second << v1[0].first;

    if(v0[0].first==v1[0].first){
        cout << min(n - v0[0].second - v1[1].second,n-v0[1].second - v1[0].second);
    }else{
        cout << n - v0[0].second - v1[0].second; 
    }




}

