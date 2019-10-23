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

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

const string DIR[]={"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};

int main(){
    double Deg,Dis;
    string Dir="N";
    int W;
    cin >> Deg >> Dis;
    Deg=Deg/10;
    FOR(i,1,16){
        if(11.25+(i-1)*(22.50)<=Deg && Deg < 11.25+(i)*(22.50)){
            Dir=DIR[i];
            break;
        }
    }
    Dis=round(Dis/6.0)/10.0;
    if(Dis<=0.2) {
        W=0; Dir="C";
    }else if(Dis<=1.5) W=1;
    else if(Dis<=3.3) W=2;
    else if(Dis<=5.4) W=3;
    else if(Dis<=7.9) W=4;
    else if(Dis<=10.7) W=5;
    else if(Dis<=13.8) W=6;
    else if(Dis<=17.1) W=7;
    else if(Dis<=20.7) W=8;
    else if(Dis<=24.4) W=9;
    else if(Dis<=28.4) W=10;
    else if(Dis<=32.6) W=11;
    else W=12;
    cout << Dir <<" "<<W<<endl;


    return 0;

}