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

bool is_int(double x){
    if(ceil(x) != floor(x)){
        return false;
    }else{
        return true;
    }
}

int main() {
	llong N;
    cin >>N;
    llong ans =0;
    llong r = sqrt(N)+1;
    FOR(i,1,min(r,N)){
        double s = double(N)/(i);
        if(! is_int(s)) continue;
        llong m = N/i - 1;
        if(i>=m){
            break;
        }else{
            ans+=m;
        }

    }
    


    cout << ans << endl;


    

    




}
