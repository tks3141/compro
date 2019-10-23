#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> P;
const LL mod=1000000007;

int main(){
    char imp[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> imp[i][j];
        }
    }
    for(int i=3;i>-1;i--){
        for(int j=3;j>-1;j--){
            cout << imp[i][j]<<(j==0?"\n":" ");
        }
    }



    return 0;

}