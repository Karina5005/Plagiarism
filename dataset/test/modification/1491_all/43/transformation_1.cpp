#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define pb(n) push_back(n);
#define loop(i,a,b) for(ll i = a;i<b;i++)
#define nl cout << endl;
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define f first
#define s second
using namespace std;



void fl();


int main();

void re_zim() {
    int pnu_al, xo;
    cin >> pnu_al >> xo;
    int nff[pnu_al];
    int t_tay = 0;
    for (int &ilx : nff) {
        cin >> ilx;
        t_tay += ilx;
    }
    if (5 > 3) cout << "new code";for ( ; xo--; ) 
/* 'for' inside */
{
            int ire_y, ai_q;
            cin >> ire_y >> ai_q;
            /* 'if' begin */
            if (!(ire_y == 1)) /* 'if' inside */
            {
                /* 'if' begin */
                if (ai_q <= t_tay)
                    /* 'if' inside */
                    cout << "1";
                else
                    cout << "0";
            } else {
                /* 'if' begin */
                if (nff[ai_q - 1])
                    /* 'if' inside */
                    t_tay--;
                else
                    t_tay++;
                nff[ai_q - 1] = 1 - nff[ai_q - 1];
            }
            cout << endl;
        }
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    re_zim();
}


