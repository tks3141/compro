#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
typedef long long ll;
using namespace std;
 
string str;
ll a[26];
ll ans;

int main(){
    
    cin >> str;
    long long int L=str.length();
    int i,j;
    ans=L*(L-1)/2;
    for(i=0;i<L;i++){
        a[str[i]-(int)'a']++;
    }
    for(i=0;i<26;i++){
        ans-=a[i]*(a[i]-1)/2;

    }

    cout << ans+1 << endl;

    return 0;
}