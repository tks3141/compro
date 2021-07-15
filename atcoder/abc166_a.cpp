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
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


int main() {
	string s,t;cin >> s >> t;
    if(s[0] == t[0] && s[1] == t[1] && s[2] == t[2]){
        cout << "same" << endl;
    }else if(toupper(s[0]) == toupper(t[0]) && toupper(s[1]) == toupper(t[1]) && toupper(s[2]) == toupper(t[2])){
        cout << "case-insensitive" << endl;
    }else{
        cout << "different" << endl;
    }
}
