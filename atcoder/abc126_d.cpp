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


struct Node {
    int gr = 0;
    vector <int> tonari ;
    vector <int> w;
    int getGR(int from = -1){
        if(gr!=0){
            return gr;
        }else{

        }
    }

};
struct Graph {
    vector<Node> nodes;
    Graph (int N) :nodes(N){

    }
    int renketu(int to,int from,int cost){
        tonari.push_back(to);
        w.push_back(cost%2 + 2);
    }
};

int main() {
	llong N;
    cin >>N;
    LV u(N),v(N),w(N);
    REP(i,N){
        cin >> u[i] >> v[i] >> w[i];
    }


    




}
