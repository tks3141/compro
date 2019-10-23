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

int f(){
    LL x,y;
    while(cin >> x >> y){
        if(!x || !y){
            LL a = max(abs(x),abs(y));
            if(a==1){
                cout << 1 << endl;
            }else{
                cout << (a%2 ? a+1 : a )<< endl; 
            }
        }else if((abs(x)<2) && (abs(y)<2)){
            cout << max(abs(x),abs(y)) <<endl;
        }else{
            if( (abs(x)%2)&&(abs(y)%2) ){
                cout << abs(x)+abs(y)-1 << endl;
            }else{
                cout << abs(x)+abs(y) << endl;
            }
        }
    }

    return 0;

}

int main(){
    f();

    return 0;
}