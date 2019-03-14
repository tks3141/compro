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
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


// int find_most_close(LV &v,llong x){
//     auto it = lower_bound(v.begin(),v.end(),x);
//     int idx = it -v.begin();
//     llong s = v[idx] -x;
//     if(idx==0){
//         return idx;
//     }
//     if(s > x - v[idx-1] ){
//         return idx-1;
//     }else{
//         return idx;
//     }
// }

 
int main() {
	llong A,B,Q;
    cin >> A >> B >> Q;
    LV s(A),t(B),x(Q);
    REP(i,A){
        scanf("%lld",&s[i]);
    }
    REP(i,B){
        scanf("%lld",&t[i]);
    }
    REP(i,Q){
        scanf("%lld",&x[i]);
    }

    REP(xi,Q){
        auto it = lower_bound(s.begin(),s.end(),x[xi]);
        int idx = it - s.begin();
        llong sr = s[idx];
        llong sl = (idx > 0) ? s[idx-1] : INF;

        it = lower_bound(t.begin(),t.end(),x[xi]);
        idx = it -t.begin();
        llong tr = t[idx];
        llong tl = (idx > 0) ? t[idx-1] : INF;
        llong cost = INF;
        LV sg{sl,sr};
        LV tg{tl,tr};
        // cout << "sg,tg" << sg[0] <<' '<< sg[1] << " " << tg[0] << " " << tg[1] << endl;
        REP(i,2){
            REP(j,2){
                llong fi = min(abs(x[xi]-tg[i]),abs(x[xi]-sg[j]));
                llong sec = abs( tg[i] - sg[j]  );
                cost = ((fi + sec) < cost) ? (fi + sec) : cost;
            }
        }
        cout << cost << endl;




       
        


    }


    


}
