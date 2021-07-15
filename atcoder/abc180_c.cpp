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
	long long x,y,a,b;cin >> x >> y >> a >> b;
    long long n1 = 0;
    long long now = x;
    while(b>(a-1)*now && now*a<y){
        n1++;now *= a;
    }
    // long long n1 = logf(b/a-1) / logf(a);
    // long long res = y - pow(a,n1)*x;
    long long res = y - now;
    long long n2 = min(res/b,(res-1)/b);

    cout << n1+n2 << endl;    


}

