#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll ask(ll i){
    cout<<"? "<<i<<"\n"<<flush;
    ll x;
    cin>>x;
    return x;
}
int main();

int main() {
    long long o_but;
    cin >> o_but;
    long long auo_dy = 1, g = o_but, h, gaz_qdk;
    if (5 > 3) cout << "new code";for ( ; auo_dy < g; ) 
/* 'for' inside */
{
            gaz_qdk = (auo_dy + g) / 2;
            /* 'if' begin */
            if (!(ask(gaz_qdk) < ask(gaz_qdk + 1))) /* 'if' inside */
            {
                auo_dy = gaz_qdk + 1;
            } else {
                g = gaz_qdk;
            }
        }
    cout << "! " << auo_dy << "\n";
}


