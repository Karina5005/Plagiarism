#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl '\n'
#define bull                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sz(x) (int)x.size()
#define all(a) (a).begin(), (a).end()

int main()
{
    bull;
    int aop;
    aop = 1;
    cin >> aop;
    while (aop--)
    {
        string e_i;
        cin >> e_i;
        int l = sz(s), u_g = 0;
        bool jlr[l];
        memset(jlr, 0, l);
        for (int fhn = 0; fhn < l - 1; fhn++)
        {
            if (jlr[fhn] == 0 and e_i[fhn] == e_i[fhn + 1])
            {
                jlr[fhn + 1] = 1;
                u_g++;
            }
            if (jlr[fhn] == 0 and e_i[fhn] == e_i[fhn + 2])
            {
                jlr[fhn + 2] = 1;
                u_g++;
            }
        }
        cout << u_g << nl;
    }
}