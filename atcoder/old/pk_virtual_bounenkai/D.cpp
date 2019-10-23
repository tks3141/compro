#include <bits/stdc++.h>
#include<iostream>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

llong gcd( llong m, llong n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	// ユークリッドの方法
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}//gcd

//*********************************************************
// 最小公倍数（Least Common Multiple）を返す。
// 引数に０がある場合は０を返す。
//*********************************************************
llong lcm( llong m, llong n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}//lcm



int main(){
    llong N;
    string S;
    cin >> S;
    llong ans=0;
    for(int i=0;i<S.length();i++){
        if(i%2==0){
            ans+=(S[i]=='g'?0:-1);
        }else{
            ans+=(S[i]=='g'?1:0);
        }
    }
    cout << ans<<endl;
       
    
    
    return 0;
}