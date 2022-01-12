#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='N'){
            cnt++;
        }
    }
    if(cnt == 1){
        cout << "No" << endl;
        return;
    }
    cout << "yes" << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}