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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        for(int i=0; i<n; i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(i%2==0)/* 'if' inside */
            {
                /* 'if' begin */
                if(s[i]=='a')/* 'if' inside */
                {
                    cout << 'b';
                }
                else{
                    cout << 'a';
                }
            }
            else{
                /* 'if' begin */
                if(s[i]=='z')/* 'if' inside */
                {
                    cout << 'y';
                }
                else{
                    cout << 'z';
                }
            }
        }
        cout << "\n";
    }

    return 0;
}