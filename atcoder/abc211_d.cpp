#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define FORR(i, m, n) for (int i = m; i >= n; i--)
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF (long long)1 << 61
#define MOD 1000000007
#define all(a) a.begin(), a.end()

#define NO "UNSOLVABLE"

using namespace std;

typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<int> IV;
typedef vector<llong> LV;

int dy[] = {0, 0, 1, -1, 0};
int dx[] = {1, -1, 0, 0, 0};

vector<char> uniq_c, used[10];
struct Edge
{
  int to;
  int cost;
};

typedef pair<int, int> Node; // first: 最短距離, second: 頂点番号
using Graph = vector<vector<Edge>>;


const int MAX_V = 200001;
vector<long long> dist(MAX_V),cnt(MAX_V);
Graph G(MAX_V, vector<Edge>());

void dijkstra(const Graph &G, int s, vector<long long> &dist,vector<long long> &cnt)
{
  int N = G.size();
  dist.assign(N,INF);
  dist[s] = 0;
  cnt.assign(N,0);
  cnt[s] = 1; // 始点sへの最短経路数は1

  priority_queue<Node, vector<Node>, greater<Node>> que; 
  que.emplace(Node(0, s));
  while (!que.empty())
  {
    Node p = que.top();que.pop();
    int v = p.second;
    if (dist[v] < p.first) continue;
    for (const auto &e : G[v])
    {
      if (dist[e.to] > dist[v] + e.cost)
      {
        dist[e.to] = dist[v] + e.cost;
        que.push(Node(dist[e.to], e.to));
        cnt[e.to] = cnt[v]; // update
      }
      else if (dist[e.to] == dist[v] + e.cost)
      {
        cnt[e.to] += cnt[v]; // コストが一致する場合は最短経路数をsum
        cnt[e.to] %= MOD;
      }
    }
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  REP(i, M)
  {
    int A, B;
    cin >> A >> B;
    G[A].push_back(Edge{to : B, cost : 1});
    G[B].push_back(Edge{to : A, cost : 1});
  }
  dijkstra(G,1,dist,cnt);

  // REP(i,N+1){
  //   cout << cnt[i];
  // }
  cout << cnt[N];
}