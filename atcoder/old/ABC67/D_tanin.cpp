#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
 
const int MAX = 1e5;
const int INF = 1e9;
int N;
vector<vector<int> > edge(MAX);
int d1[MAX]; // ??1???????????
int dN[MAX]; // ??N???????????
 
// n:?????????d:???????
void dfs(int n, int d, bool flag) {
  for (int i = 0; i < edge[n].size(); i++) {
    if (flag) {
      if (edge[n][i] == N - 1) continue;
      if (d1[edge[n][i]] < INF) continue;
      d1[edge[n][i]] = d;
      dfs(edge[n][i], d + 1, true);
    } else {
      if (edge[n][i] == 0) continue;
      if (dN[edge[n][i]] < INF) continue;
      dN[edge[n][i]] = d;
      dfs(edge[n][i], d + 1, false);
    }
  }
}
 
int main() {
  cin >> N;
  int a, b;
  for (int i = 0; i < N - 1; i++) {
    scanf("%d %d", &a, &b);
    a--; b--;
    if (b != 0 && b != N - 1) edge[a].push_back(b);
    if (a != 0 && a != N - 1) edge[b].push_back(a);
  }
 
  // ???????1???????????????N?????????????????
  fill(d1, d1 + N, INF);
  fill(dN, dN + N, INF);
  dfs(0, 1, true);
  dfs(N - 1, 1, false);
 
  // ????????d1 <= dN??????????????????
  // ??????????????????????????
  int black, white;
  black = white = 1;
  for (int i = 1; i < N - 1; i++) {
    if (d1[i] <= dN[i]) black++;
    else white++;
  }
 
  // ??
  cout << (black > white ? "Fennec" : "Snuke") << endl;
 
  return 0;
}