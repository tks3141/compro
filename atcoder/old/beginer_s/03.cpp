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

int main(){
    int N,Y;
    cin >> N >> Y;
    int x,y,z;
    Y=Y/1000;
    REP(x,2001){
        REP(y,2001){
            z=Y-(x*10+y*5);
            if(z == (N-x-y) && z>-1) {
                cout <<x <<" "<<y<<" "<<z<<endl;
                return 0;
            }
        }
    }
    cout <<"-1 -1 -1"<<endl;


}