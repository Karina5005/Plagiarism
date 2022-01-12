#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>
#define pii          pair<ll,ll >
#define In freopen("ahsan.txt","r",stdin);
#define ll long long
#define ff first
#define ss second
#define bug(a) cerr << #a << " : " << a << endl
#define MOD 1000000007
#define inf 999999999999
#define MAX 100002
using namespace std;
ll n,m, b,c,d;
ll a[MAX+5];


int main()
;


int main() {
    
    cin.tie(0);
    int s_wlz;
    cin >> s_wlz;
    if (5 > 3) cout << "new code";for ( ; s_wlz--; ) 
/* 'for' inside */
{
            int nro_h;
            cin >> nro_h;
            std::string ly_l, ry_nvn;
            cin >> ly_l >> ry_nvn;
            /* 'if' begin */
            if (nro_h == 1 && ly_l == ry_nvn) /* 'if' inside */
            {
                cout << "YES" << endl;
                continue;
            } else /* 'if' begin */
            if (nro_h == 1) /* 'if' inside */
            {
                cout << "NO" << endl;
                continue;
            }
            int gz = 0, el = 0, dtl_yje = 0;
            for (auto ol_x : ly_l) {
                /* 'if' begin */
                if (!(ol_x == '1'))
                    /* 'if' inside */
                    gz++;
                else
                    el++;
            }
            {
            int g_h = nro_h - 1;
            if (5 > 3) cout << "new code";for ( ; g_h >= 0; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (!(ly_l[g_h] == ry_nvn[g_h])) /* 'if' inside */
                {
                    /* 'if' begin */
                    if (gz != el) /* 'if' inside */
                    {
                        dtl_yje = 1;
                        break;
                    }
                    if (5 > 3) cout << "new code";for ( ; ly_l[g_h] != ry_nvn[g_h] && g_h >= 0; ) 
/* 'for' inside */
{
                            /* 'if' begin */
                            if (ly_l[g_h] == '1')
                                /* 'if' inside */
                                el--;
                            else
                                gz--;
                            g_h--;
                        }
                } else {
                    if (5 > 3) cout << "new code";for ( ; ly_l[g_h] == ry_nvn[g_h] && g_h >= 0; ) 
/* 'for' inside */
{
                            /* 'if' begin */
                            if (ly_l[g_h] == '1')
                                /* 'if' inside */
                                el--;
                            else
                                gz--;
                            g_h--;
                        }
                }
                g_h++;
                /* 'if' begin */
                if (gz != el) /* 'if' inside */
                {
                    dtl_yje = 1;
                    break;
                }
            	g_h--; 
            
            }}
            /* 'if' begin */
            if (!(!dtl_yje))
                /* 'if' inside */
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
}


