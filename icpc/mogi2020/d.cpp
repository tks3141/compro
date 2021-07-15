#include<bits/stdc++.h>
using namespace std;
#include<fstream>



int main(){
    // ifstream cin("input.txt");
    while(1){
        string s;cin>>s;
        if(s == "#"){return 0;}
        int cnt_a = 0;
        int cnt_t = 0;
        int ans = 0;

        vector<pair<int,int>> res();


        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ')'){
                cnt_t++;
                if(i < s.size() - 1 && s[i + 1] == '('){
                    if(cnt_a < (cnt_t+1)/2){
                        ans += (cnt_t+1)/2 - cnt_a;
                    }else{
                        int sm = cnt_a - cnt_t;
                        int dai = cnt_a - (cnt_t+1)/2;
                        res.push_back(make_pair(sm,dai));
                    }

                    cnt_a = 0;
                    cnt_t = 0;


                    // if(cnt_a > 2 * cnt_t){//空きが余る時
                    //     int sm = 
                    //     ans += (cnt_a - 2 * cnt_t + 1) / 2;
                    // }
                    // else if(2 * cnt_a < cnt_t){//閉じが余る時
                    //     ans += (cnt_t - 2 * cnt_a + 1)/2;
                    // }
                    // cnt_a = 0;
                    // cnt_t = 0;
                    // // cout << ans << endl;
                }
            }
            else{
                cnt_a++;
            }
        }
        if(cnt_a > 2 * cnt_t){
            ans += (cnt_a - 2 * cnt_t + 1) / 2;
        }
        else if(2 * cnt_a < cnt_t){
            ans += (cnt_t - 2 * cnt_a + 1)/2;
        }
        cout << ans << endl; 
    }
    
    return 0;
}