#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> P;
const LL mod=1000000007;

int main(){
    string S,T;
    cin >> S>>T;
    bool check =true;
    for(int i=0;i<S.length();i++){
        if(S[i]!=T[i]){
            if(S[i]=='@' && (T[i]=='a'||T[i]=='t'||T[i]=='c'||T[i]=='o'||T[i]=='d'||T[i]=='e'||T[i]=='r')){
                continue;
            }else if(T[i]=='@' && (S[i]=='a'||S[i]=='t'||S[i]=='c'||S[i]=='o'||S[i]=='d'||S[i]=='e'||S[i]=='r')){
                continue;
            }else{
                check=false;
            }  
        }
    }
    cout << ((check)?"You can win":"You will lose")<<"\n";


    return 0;

}