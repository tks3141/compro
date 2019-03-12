#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> V;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


class UnionFind {
    public:
        //親の番号を格納する。親だった場合は -(その集合のサイズ)
        vector<int> Parent;
    
        //作るときはParentの値を全て-1にする
        //こうすると全てバラバラになる
        UnionFind(int N) {
            Parent = vector<int>(N, -1);
        }
    
        //Aがどのグループに属しているか調べる
        int root(int A) {
            if (Parent[A] < 0) return A;
            //親を探索したらそれを自身の親に書き換える。経路圧縮。
            return Parent[A] = root(Parent[A]);
        }
    
        //自分のいるグループの頂点数を調べる
        int size(int A) {
            return -Parent[root(A)];//親をとってきたい]
        }
    
        //AとBをくっ付ける
        bool unite(int A, int B) {
            //AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
            A = root(A);
            B = root(B);
            if (A == B) {
                //すでにくっついてるからくっ付けない
                return false;
            }
    
            //大きい方(A)に小さいほう(B)をくっ付けたい
            //大小が逆だったらひっくり返しちゃう。
            if (size(A) < size(B)) swap(A, B);
    
            //Aのサイズを更新する
            Parent[A] += Parent[B];
            //Bの親をAに変更する
            Parent[B] = A;
    
            return true;
        }
};
 
int main() {
	llong N, M;
	cin >> N >> M;
    V A(M),B(M);
    REP(i,M){
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    UnionFind uni(N);

    V ans(M);
    ans[M-1]=N*(N-1)/2;

    FORR(i,M-1,1){
        ans[i-1]=ans[i];
        //根が違う、つまり違うグループだったらつなげる
        if(uni.root(A[i]) != uni.root(B[i])){
            ans[i-1] -= (llong)(uni.size(A[i]) * uni.size(B[i]));
            uni.unite(A[i],B[i]);
        }
    }

    REP(i,M){
        cout << ans[i] << endl;
    }


}
