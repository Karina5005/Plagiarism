#include<bits/stdc++.h>

#define ee end()
#define bb begin()
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define pf push_front
#define popb pop_back()
#define popf pop_front()
#define mem(a, v) memset(a, v, sizeof(a))

using namespace std;

typedef long long ll;

const double EPS = 1e-9;
const long long MAX = 1e5 + 11;
const long long OO = 1e9 + 11;
const long long BOO = 1e18 + 11;

int t;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        /* 'for' inside */
        {
            /* 'if' begin */
            if(i % 2 == 0)
            /* 'if' inside */
            {
                /* 'if' begin */
                if(s[i] != 'a')
                /* 'if' inside */
                {
                    s[i] = 'a';
                }
                else
                {
                    s[i] = 'b';
                }
            }
            else
            {
                /* 'if' begin */
                if(s[i] != 'z')
                /* 'if' inside */
                {
                    s[i] = 'z';
                }
                else
                {
                    s[i] = 'y';
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
