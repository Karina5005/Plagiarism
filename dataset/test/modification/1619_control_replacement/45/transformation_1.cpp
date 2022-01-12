#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back
#define endl '\n'
#define MP make_pair
#define fi first
#define se second
using namespace std;
typedef long long int ll;

const ll INF = 1e9 + 10;

int main(){
    int t;
    cin >> t;
    for ( ; t--; ) 
{
        string s;
        cin >> s;
        int l = s.size();
        bool ok = true;
        if(!(l%2 == 0)){
            ok = false;
        }
        else{
            {
            int i = 0;
            for ( ; i < l / 2; ) 
{
                if(s[i] != s[i + (l / 2)]){
                    ok = false;
                }
            	++i; 
            
            }}
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
