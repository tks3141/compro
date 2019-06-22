#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF (long long)1 << 61
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
	llong N; cin >> N;

    vector<pair<int,int>> pairs(N);
    llong a,b;
    REP(i,N){
        cin >> a >> b;
        pairs[i]=make_pair(b,a);
    }
    VSORT(pairs);
    llong now=0;
    REP(i,N){
        now+=pairs[i].second;
        if(now>pairs[i].first){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}




// bool compare_by_b(pair<int, int> &a, pair<int, int> &b) {
//     if(a.second != b.second){
//         return a.second < b.second;
//     }else{
//         return a.first < b.first;
//     }
// }

// int main() {
// 	llong N;
//     cin >> N;

//     vector<pair<int,int>> pairs(N);
//     llong a,b;
//     REP(i,N){
//         cin >> a >> b;
//         pairs[i]=make_pair(a,b);
//     }

//     sort(pairs.begin(),pairs.end(),compare_by_b);
    
//     llong now=0;
//     REP(i,N){
//         now+=pairs[i].first;
//         if(now>pairs[i].second){
//             cout << "No" << endl;
//             return 0;
//         }
//     }

//     cout << "Yes" << endl;
//     return 0;
// }
