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

llong gcd(llong a, llong b) {
  if(a < b) gcd(b, a);
  llong r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main() {
	llong N;
    cin >>N;
    llong ans =1;
    LV A(N);
    LV before_r(N),after_r(N),before_l(N),after_l(N);
    REP(i,N){
        cin >> A[i];
    }
    after_r[N-1]=before_r[N-1]=A[N-1];


    REPR(i,N-2){
        before_r[i]=after_r[i+1];
        after_r[i]=gcd(A[i],before_r[i]);
    }
    before_l[0]=after_l[0]=A[0];
    FOR(i,1,N){
        before_l[i]=after_l[i-1];
        after_l[i]=gcd(before_l[i],A[i]);
    }

    llong ngcd = after_r[0];
    llong min_notg = INF;
    // REP(i,N){
    //     cout << before_l[i] << " ";
    // }
    // cout << "e" << endl;
    // REP(i,N){
    //     cout << before_r[i] << " ";
    // }
    LV notme(N);
    FOR(i,1,N-1){
        notme[i]=gcd(before_l[i],before_r[i]);
    }
    notme[0]=before_r[0];
    notme[N-1]=before_l[N-1];
    sort(notme.begin(),notme.end());
    ans = notme[0];
    REPR(i,N-1){
        if(notme[i] != ans){
            ans = notme[i];
            break;
        }
    }





    cout << ans << endl;





}
