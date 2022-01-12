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

const double wj = 1e-9;
const long long mbx = 1e5 + 11;
const long long f_ioa = 1e9 + 11;
const long long nv_i = 1e18 + 11;

int d_o;
string ouz_h;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> d_o;
    while(d_o--)
    {
        cin >> ouz_h;
        for(int v_v = 0; v_v < ouz_h.size(); v_v++)
        {
            if(v_v % 2 == 0)
            {
                if(ouz_h[v_v] != 'a')
                {
                    ouz_h[v_v] = 'a';
                }
                else
                {
                    ouz_h[v_v] = 'b';
                }
            }
            else
            {
                if(ouz_h[v_v] != 'z')
                {
                    ouz_h[v_v] = 'z';
                }
                else
                {
                    ouz_h[v_v] = 'y';
                }
            }
        }
        cout << ouz_h << "\n";
    }
    return 0;
}
