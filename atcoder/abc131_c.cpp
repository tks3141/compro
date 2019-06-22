#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define INF (long long)1 << 61
#define MOD 1000000007
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
typedef pair<LL, LL> LP;
typedef pair<int, P> PP;
typedef pair<LL, LP> LPP;
typedef vector<LL> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

LL gcd(LL a, LL b){    return b != 0 ? gcd(b, a % b) : a;} 

LL lcm(LL number1,LL number2){	return number1 * number2 / gcd(number1,number2);}


LL f(LL a,LL x,LL y){
    LL ax=a/x;
    LL ay=a/y;
    LL axy=a/(lcm(x,y));
    return ax+ay-axy;
}

int main(){
    LL a,b,c,d; cin >> a>>b>>c>>d;
    cout << b-a+1 -( f(b,c,d) - f(a-1,c,d));
    return 0;

}




// LL numBY(LL A,LL B,LL x){
//     LL a = ceil(A/((double)x));
//     LL b = (B/x);
//     return b-a+1;
// }

// int main() {
// 	LL A,B,C,D;
//     cin >>A >> B >> C >> D;
//     LL a = numBY(A,B,C);
//     LL b = numBY(A,B,D);
//     // LL ab =0;
//     LL c = lcm(C,D);
//     LL ab = numBY(A,B,c);
//     // if(c==C || c==D){
//     //     ab=0;
//     // }

//     cout << (100000000000000001.0/100000000000000000) << endl;

//     cout << B-A+1-a-b+ab << endl;
    

//     return 0;
    

// }
