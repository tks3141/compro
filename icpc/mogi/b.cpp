#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define INF 10 << 31
#define MOD 1000000007
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
typedef pair<LL, LL> LP;
typedef pair<int, P> PP;
typedef pair<LL, LP> LPP;
typedef vector<int> V;
typedef vector<LL> LV;

LL gcd(LL a, LL b){    return b != 0 ? gcd(b, a % b) : a;} 

LL lcm(LL number1,LL number2){	return number1 * number2 / gcd(number1,number2);}

int numa(int x,int y,int a,int b,int c,int d){
    if((a<=x && x<=c) &&(b<=y && y<=d) ){
        return 0;
    }
    return min(abs(x-a),abs(x-c)) + min(abs(y-b),abs(y-d));
}

int f(){
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;
    if(n==0) return 0;
    int nx,ny,bx,by;
    cin >> bx >> by;

    LL ans =0;
    vector<P> g(n);
    REP(i,n){
        cin >> g[i].first >> g[i].second;
    }
    FOR(i,0,n){
        nx=g[i].first;ny=g[i].second;
        //目的地と沼との距離
        int t_n=numa(nx,ny,a,b,c,d);
        //いまの自分と沼の距離
        int me_n=numa(bx,by,a,b,c,d);
        if(me_n>0) me_n--;
        // いまから目的地への最短の距離 沼沼の場合
        int me_t = abs(bx-nx)+abs(by-ny);
        
        ans+=min( t_n+me_n  ,me_t);
        bx=nx;by=ny;
    }

    cout << ans << endl;

    return 1;

}

int main(){
    while(f());

    return 0;
}