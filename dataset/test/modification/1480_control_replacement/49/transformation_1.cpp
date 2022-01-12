#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int main() { 
    
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for ( ; t--; ) 
{
        string s;
        cin >> s;
        int n = s.size();
        {
        int i=0;
        for ( ; i<n; ) 
{
            if(!(i%2==0)){
                if(s[i]=='z'){
                    cout << 'y';
                }
                else{
                    cout << 'z';
                }
            }
            else{
                if(s[i]=='a'){
                    cout << 'b';
                }
                else{
                    cout << 'a';
                }
            }
        	i++; 
        
        }}
        cout << "\n";
    }

    return 0;
}