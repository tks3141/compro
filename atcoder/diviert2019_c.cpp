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


int count_ab(string S){
    int n = S.length();
    char be = S[0];
    int ret=0;
    FOR(i,1,n){
        if((be == 'A') && (S[i] == 'B')){
            ret++;
        }
        be = S[i];
    }
    return ret;
    
}

int main() {
	llong N;
    cin >>N;
    vector<string> SV(N);
    string S;
    int an,bn,mn,ba;
    mn = an = bn = ba = 0;
    REP(i,N){
        cin >> S;
        mn += count_ab(S);
        if( (S[0] == 'B') && (S[ S.length()-1] == 'A')){
            ba ++;
            continue;
        }
        if(S[0] == 'B') bn++;
        if(S[ S.length()-1 ] == 'A') an++;
    }

    // printf("a=%d,b=%d,m=%d,ba=%d",an,bn,mn,ba);
    if(ba>0){
        mn+= ba-1;
        if((an>0) && (bn>0)){
            an--;
            bn--;
            mn+=2;
        }else if( max(an,bn) > 0){
            mn++;
        }
    }
    llong ans =min(an,bn) + mn;
    cout << ans << endl;


    

    




}
