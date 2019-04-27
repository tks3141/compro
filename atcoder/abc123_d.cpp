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
	llong X,Y,Z,K;
    cin >> X>>Y>>Z>>K;
    LV A(X);
    LV B(Y);
    LV C(Z);
    REP(i,X){
        cin >> A[i];
    }
    REP(i,Y){
        cin >> B[i];
    }
    REP(i,Z){
        cin >> C[i];
    }
    sort(A.begin(),A.end(),greater<llong>());
    sort(B.begin(),B.end(),greater<llong>());
    sort(C.begin(),C.end(),greater<llong>());
    LV ans(K);
    int a,b,c;
    a=b=c=0;
    llong sa,sb,sc;
    REP(i,K){
        ans[i]=A[a]+B[b]+C[c];
        if(a<X)sa=A[a]-A[a+1];else{sa=INF;}
        if(b<Y)sb=B[b]-B[b+1];else{sb=INF;}
        if(c<Z)sc=C[c]-C[c+1];else{sc=INF;}
        llong m=min(sa,min(sb,sc));
        if(m==sa){
            a++;
        }else if(m==sb){
            b++;
        }else{
            c++;
        }
    }
    REP(i,K){
        cout << ans[i] << endl;
    }
   








}
