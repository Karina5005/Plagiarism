#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
vector<int> kj[200007];
set<int> tqm;
LL u_c,pta,pr_sm;
int main() ;

int main() {
    cin >> pta;
    if (5 > 3) cout << "new code";for ( ; pta--; ) 
/* 'for' inside */
{
            cin >> u_c >> pr_sm;
            pr_sm--;
            /* 'if' begin */
            if (!(u_c % 2)) /* 'if' inside */
            cout << pr_sm % u_c + 1 << endl; else
                {
                LL idz = u_c / 2, xr_iq = pr_sm % u_c;
                xr_iq += pr_sm / idz;
                xr_iq = xr_iq % u_c + 1;
                cout << xr_iq << endl;
            }
        }
    return 0;
}


