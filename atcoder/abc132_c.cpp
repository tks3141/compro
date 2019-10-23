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


int main(){
    LL l,r; cin >> l>>r;
    
    LL lm = l%2019,rm=r%2019;
    if(2019-lm <= r-l){
        cout << 0 << endl;
    }else{
        LL ans=INF;
        FOR(i,lm,rm){
            FOR(j,i+1,rm+1){
                if(ans>(i*j)%2019) ans = (i*j)%2019;
            }
        }
        cout << ans << endl;


    }

    return 0;

}


