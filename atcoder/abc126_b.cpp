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
    int be = N/100;
    int af = N % 100;

    if(be<13 && af < 13 && be!=0 && af != 0){
        cout << "AMBIGUOUS" << endl;
    }else if(be < 13 && be != 0 && (af > 12 || af==0)){
        cout << "MMYY" << endl;
    }else if( (be == 0 ||  be > 12 ) && af < 13 && af != 0){
        cout << "YYMM" << endl;
    }else{
        cout << "NA" << endl;
    }







}
