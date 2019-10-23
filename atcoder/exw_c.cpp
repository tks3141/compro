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
    vector<int> p(N,1);
    vector<vector<int>> mp(26);
    REP(i,N){
        mp[s[i] - 'A' ].push_back(i);
    }
    REP(i,Q){
        char t,d;
        // cout << i << endl;
        scanf("%1s %1s",&t,&d);
        // cout << t << " " << d << endl;
        int tar_mp=t-'A';
        REPR(i_mp,mp[tar_mp].size()-1){
            int tar = mp[tar_mp][i_mp];
            if(!p[tar]) continue;
            //
            mp[tar_mp].pop_back();
            // cout << tar <<endl;
            if(d=='L'){
                if(tar==0){
                    ans-= p[0];
                    p[0]=0;
                }else{
                    if(p[tar-1]==0){
                        mp[s[tar-1] - 'A' ].push_back(tar-1);
                    }
                    p[tar-1]+=p[tar];
                    p[tar]=0;
                }
            }else{
                if(tar==N-1){
                    ans-=p[N-1];
                    p[N-1]=0;
                }else{
                    if(p[tar+1]==0){
                        mp[s[tar+1] - 'A'].push_back(tar+1);
                    }
                    p[tar+1]+=p[tar];
                    p[tar]=0;

                }
            }

        }
    }


    cout << ans << endl;





}
