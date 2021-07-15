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
#define all(a) a.begin(),a.end()

#define NO "UNSOLVABLE"

using namespace std;

typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<int> IV;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

string S1,S2,S3;
vector<char> uniq_c,used[10];

bool check(){

}

bool dfs(int depth){
  if(depth == uniq_c.size()){
    return check();
  }

  


}

int main() {
  cin >> S1 >> S2 >> S3;
  for(auto& c:S1) uniq_c.push_back(c);
  for(auto& c:S2) uniq_c.push_back(c);
  for(auto& c:S3) uniq_c.push_back(c);
  sort(all(uniq_c));
  uniq_c.erase(unique(all(uniq_c)),uniq_c.end());

  for(auto& c:uniq_c) cout << c ;

  if(uniq_c.size()>10){
    cout << NO << endl;
    return;
  }

  if(!dfs(0)){
    cout << NO << endl;
    return; 
  }
}

