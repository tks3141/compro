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
	int N;string S;
    int ans = 0;
    cin >> N >> S;
    int n[4];
    REP(i,S.length()-1){
        REP(i,4) n[i]=0;
        FOR(j,i,S.length()){
            switch (S[j])
            {
            case 'A':
                n[0]++;
                break;
            case 'T':
                n[1]++;
                break;
            case 'G':
                n[2]++;
                break;
            case 'C':
                n[3]++;
                break;
            }
            if(n[0]==n[1] && n[2]==n[3]) ans++;
        }
    }

    cout << ans << endl;
}
