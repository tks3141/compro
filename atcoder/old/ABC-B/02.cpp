#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> P;
const LL mod=1000000007;

int main(){
    string W,ans="";
    cin >> W;
    for(int i=0;i<W.length();i++){
        if(!(W[i]=='a' || W[i]=='i' || W[i]=='u' || W[i]=='e' || W[i]=='o')){
            ans+=W[i];
        }
    }
    ans+='\n';
    cout << ans;
    return 0;

}