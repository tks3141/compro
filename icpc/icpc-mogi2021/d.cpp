#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(), A.end()
#define RALL(A) A.rbegin(), A.rend()
typedef long long ll;
typedef pair<ll, ll> P;
const ll mod = 1000000007;
const ll LINF = 1LL << 60;
const ll INF = 1 << 30;
const int MAX_M = 9;
int n;
// int cnt;

int main() {
    while (1) {
        cin >> n;
        int  ans = 0;
        if (n==0) break;
        vector<int> s(n+1);
        for (int i = 1; i < n+1; i++) {
            cin >> s[i];
        }
        

        for (int i = 1; i < n+1; i++) {
            // cout << s[i]-i <<' ';
            ans += min(abs(s[i]-i),s[i]-i+n);
        }
        cout << ans << endl;
    }
    return 0;
}






