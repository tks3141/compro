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
typedef vector<int> V;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main() {
	int T;
    cin >> T;
    LV array(T);
    REP(i,T){
        cin >> array[i] ;
    }
    REP(i,T){
        llong tar=array[i];
        llong B=0;
        int cnt=1;
        while(tar>0){
            if(tar%10 == 4){
                B+=cnt;
            }
            tar=tar/10;
            cnt*=10;
        }
        llong A=array[i]-B;
        cout <<"Case #"<<i+1<<": "<< A << " "<< B << endl;

    }



}
