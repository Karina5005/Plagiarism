#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int cnt = 0;
    {
    int i=0;
    while (i<s.size()) {
        if(s[i]=='N'){
            cnt++;
        }
    	i++; 
    
    }}
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