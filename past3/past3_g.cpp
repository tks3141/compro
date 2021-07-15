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

int dy[]={1, 1, 1, 0, 0, -1};
int dx[]={1, 0, -1, 1, -1, 0};


const int Mn = 403;

int getIdx(int x){
  return x+201;
}

int getGrid(int x,int y,vector<vector<int>> v){
  x = getIdx(x); y = getIdx(y);
  return v[x][y];
}

int main() {
  int N,X,Y;cin >> N >> X >> Y;
  vector<vector<int>> grid(Mn,vector<int> (Mn,MOD));


  REP(i,N){
    int x,y;cin >> x >> y;
    x = getIdx(x);y = getIdx(y);
    grid[x][y] = -1;
  }

  X = getIdx(X);Y=getIdx(Y);
  grid[201][201] = 0;

  queue<pair<int,int>> que;
  que.push(make_pair(201,201));


  while(!que.empty()){
    P next = que.front();
    que.pop();

    int x = next.first;
    int y = next.second;
    
    if(x==X && y==Y){
      break;
    }

    REP(i,6){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx<Mn && ny < Mn && nx>=0 && ny >=0){
        if( grid[nx][ny] == MOD ){
          grid[nx][ny] = grid[x][y]+1;
          que.push(make_pair(nx,ny));
        }
      }
    }

  }

  if(grid[X][Y]<MOD){
    cout << grid[X][Y] << endl;
  }else{
    cout << -1 << endl;
  }


}
