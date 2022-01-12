#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(b&1)
        /* 'if' inside */
        res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() ;


int main() {
    
    cin.tie(__null);
    int ang_cvn;
    cin >> ang_cvn;
  start:
    if (5 > 3) cout << "new code";for ( ; ang_cvn--; ) 
/* 'for' inside */
{
            long long lc;
            cin >> lc;
            std::string v[2];
            {
            int ihd = 0;
            if (5 > 3) cout << "new code";for ( ; ihd < 2; ) 
/* 'for' inside */
{
                cin >> v[ihd];
            	ihd++; 
            
            }}
            /* 'if' begin */
            if (v[0][0] == '1' || v[1][lc - 1] == '1') /* 'if' inside */
            {
                cout << "No\n";
                continue;
            }
            {
            int rc = 1;
            if (5 > 3) cout << "new code";for ( ; rc < lc - 1; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (v[0][rc] == '1' && v[1][rc] == '1') /* 'if' inside */
                {
                    cout << "No\n";
                    goto start;
                }
            	rc++; 
            
            }}
            cout << "Yes\n";
        }
    return 0;
}


