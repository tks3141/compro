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
	llong N,Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    int ans=N;
    // vector<int> p(N,1);
    vector<char> t(Q),d(Q);
    REP(i,Q){
        cin >> t[i] >> d[i];
    }
    int tar_l,tar_r,tar,ret_l,ret_r;
    //left
    tar_l=-1,tar_r=N;
    REP(i,N){
        tar =(tar_l+tar_r)/2;
        if(tar_l+1>=tar_r){
            ret_l=tar_l;break;
        }
        int now = tar;
        int reach=0;
        REP(j,Q){
            if(t[j]==s[now]){
                if(d[j]=='L'){
                    now--;
                    if(now<0){
                        reach=1;
                        break;
                    }
                }else{
                    now++;
                }
            }
        }
        if(reach){
            tar_l=tar;
        }else{
            tar_r=tar;
        }
    }


    //right
    tar_l=-1,tar_r=N;
    REP(i,N){
        tar =(tar_l+tar_r)/2;
        if(tar_l+1>=tar_r){
            ret_r=tar_r;break;
        }
        int now = tar;
        int reach=0;
        REP(j,Q){
            if(t[j]==s[now]){
                if(d[j]=='L'){
                    now--;
                }else{
                    now++;
                    if(now>N-1){
                        reach=1;
                        break;
                    }
                }
            }
        }
        if(reach){
            tar_r=tar;
        }else{
            tar_l=tar;
        }
    }
    // cout <<ret_l <<" ,"<< ret_r <<endl;
    ans = N-min(N,(ret_l+1)+N-(ret_r));
    

    cout << ans << endl;





}
