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
int h, w;
int cnt;

bool check(string s,int x1,int y1,int x2,int y2){
	if (0 <= x1 && x1 < h && 0 <= y1 && y1 < w &&
		0 <= x2 && x2 < h && 0 <= y2 && y2 < w &&
		s[x1][y1] == '.' && s[x2][y2] == '.') {
			return true
	}else{
			return false
	}
}

int solve(vector<string> s) {
    bool flag = true;
    cnt++;
    // cout << cnt << endl;
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '.') {
				int x1,x2,y1,y2;
				x1=i
				y1=j+1
				x2=i+1
				y2=j
				if(check(s,x1,y1,x2,y2)){

				}
        }
    }
    if (flag) ans++;
    return ans;
}
int main() {
    while (1) {
        cin >> h >> w;
        if (h == 0 && w == 0) break;
        vector<string> s(h);
        for (int i = 0; i < h; i++) {
            cin >> s[i];
        }
        cout << solve(s) << endl;
    }
    return 0;
}






