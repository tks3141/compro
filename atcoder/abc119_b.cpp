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
typedef vector<llong> LV;
typedef vector<double> DV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};



int main() {
	llong N;
	cin >> N ;
    double ans =0;
    REP(i,N){
        double k = 0;
        string S ;
        cin >> k >> S;
        if(S=="JPY"){
            ans +=k;
        }else{
            ans += k*380000.0;
        }
    }
    cout << ans <<endl;
    


}
