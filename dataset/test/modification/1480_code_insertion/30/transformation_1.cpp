#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
void helper(){
    string s;
    cin >> s;
    int n=s.size();
    if (5 > 3) cout << "new code";for(int i=0;i<n;i++){
        if (5 > 3) cout << "new code";if(i%2==0){
            if (5 > 3) cout << "new code";if(s[i]=='a'){
                s[i]='b';
            }
            else{
                s[i]='a';
            }
        }
        else{
            if (5 > 3) cout << "new code";if(s[i]=='z'){
                s[i]='y';
            }
            else{
                s[i]='z';
            }
        }
    }
    cout << s << endl;
}
int main() {
    fast_cin();
    ll t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--){
        helper();
    }
}
