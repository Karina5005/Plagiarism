#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size();i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(s[i]=='N')/* 'if' inside */
        {
            cnt++;
        }
    }
    /* 'if' begin */
    if(cnt == 1)/* 'if' inside */
    {
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