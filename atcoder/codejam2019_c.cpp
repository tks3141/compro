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

#define int long long


using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;
typedef vector<int> V;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int fact(int x,vector<int> &pl,int *a,int *b){
    REP(i,pl.size()){
        if(x%pl[i]==0){
            *a=pl[i];
            *b=x/pl[i];
            return 0;
        }
    }
}

main() {
	int T;
    cin >> T;
    llong pm=10001;
    vector<bool> plist(10003,true);
    vector<int> pl(1,2);
    FOR(i,3,pm){
        if(plist[i]){
            pl.push_back(i);
            for(int j=1;j*i<+pm;j++){
                plist[j*i]=false;
            }
        }
    }
    // cout << pl.size()<<endl;

    REP(cs,T){
        int N,L;
        cin >> N >> L;
        LV ar(L);
        REP(i,L){
            cin >> ar[i];
        }
        LV ans_nl(3);
        int a1,a2,b1,b2;
        fact(ar[0],pl,&a1,&a2);
        fact(ar[1],pl,&b1,&b2);
        if(a1==b1){
            ans_nl[0]=a2;
            ans_nl[1]=a1;
            ans_nl[2]=b2;
        }else if(a2==b1){
            ans_nl[0]=a1;
            ans_nl[1]=a2;
            ans_nl[2]=b2;
        }else if(a1==b2){
            ans_nl[0]=a2;
            ans_nl[1]=a1;
            ans_nl[2]=b1;
        }else{
            ans_nl[0]=a1;
            ans_nl[1]=a2;
            ans_nl[2]=b1;
        }
        FOR(i,2,L){
            int a,b;
            fact(ar[i],pl,&a,&b);
            if(a==ans_nl[i]){
                ans_nl.push_back(b);
            }else{
                ans_nl.push_back(a);
            }
        }
        vector<int> char_nl(0);
        REP(i,L+1){
            auto itr = find(char_nl.begin(),char_nl.end(),ans_nl[i]);
            if(itr == char_nl.end()){
                char_nl.push_back(ans_nl[i]);
            }   
        }
        sort(char_nl.begin(),char_nl.end());
        map<int,char> mp;
        REP(i,26){
            mp[ char_nl[i] ]='A'+i;
        }
        string ans;
        REP(i,L+1){
            ans.push_back(mp[ans_nl[i]]);
        }

        cout <<"Case #"<<cs+1<<": "<<ans << endl;

    }



}
