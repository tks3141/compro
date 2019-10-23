#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999999
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
	llong N;
    cin >>N;
    llong ans =0;
    llong cm = 0;
    LV A(N);
    REP(i,N){
        cin >> A[i];
        if(A[i]<0) {
            A[i]=-1*A[i];
            cm++;
            }
        ans += A[i];
    }
    // cout << ans <<"a" << endl;
    if( (cm%2) == 0){
        
    }else{
        // cout << cm << endl;
        sort(A.begin(),A.end());
        ans = ans - A[0]*2;
    }

    cout << ans << endl;


    

    




}
