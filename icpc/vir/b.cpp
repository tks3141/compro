#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define INF 999999999999
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

int f(){
    int t,d,l;
    cin >> t >> d >> l;
    if(t==0) return 0;
    LV x(t);
    REP(i,t){
        cin >> x[i];
    }
    LV y(t,0);

    y[0]=(x[0]>=l) ? d : 0;
    FOR(i,1,t-1){
        if(x[i]>=l){
            y[i]=d;
        }else{
            y[i]=y[i-1]-1;
        }
    }
    int ans=0;
    REP(i,t){
        if(y[i]>0){
            ans++;
        }
        // cout << y[i] << endl;
    }
    cout << ans << "aa"<<  endl;
    return 1;

}

int main(){
    while(f());
}