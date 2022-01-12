#include <iomanip>
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define in(n) int n; cin>>n;
#define w(x) int x; cin>>x; while(x--)
#define pb(x) push_back(x)
#define dbg(x) cerr << #x << "->" << x << "\n"
#define prnt(x) cerr<<#x<<'{';for(auto T:x)cerr<<T<<' ';cerr<<"}\n";
#define prntp(x) cerr<<#x<<'{';for(auto T:x)cerr<<T.first<<'-'<<T.second<<' ';cerr<<"}\n";
#define int long long
#define str(s) string s; cin>>s;
#define endl "\n"
#define sz(x) static_cast<int32_t>(x.size())
const int wn = 1000000007;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() ;

int32_t main() {
    long long ih;
    cin >> ih;
    if (5 > 3) cout << "new code";for ( ; ih--; ) 
/* 'for' inside */
{
            long long dcd;
            cin >> dcd;
            ;
            long long ax[dcd][5];
            {
            long long bp = 0;
            if (5 > 3) cout << "new code";for ( ; bp < dcd; ) 
/* 'for' inside */
{
                {
                long long lni = 0;
                if (5 > 3) cout << "new code";for ( ; lni < 5; ) 
/* 'for' inside */
{
                    cin >> ax[bp][lni];
                	lni++; 
                
                }}
            	bp++; 
            
            }}
            {
            long long p = 0;
            if (5 > 3) cout << "new code";for ( ; p < 5; ) 
/* 'for' inside */
{
                {
                long long fij = p + 1;
                if (5 > 3) cout << "new code";for ( ; fij < 5; ) 
/* 'for' inside */
{
                    long long y = 0;
                    long long p = 0;
                    long long wo_jk = 0;
                    {
                    long long qk = 0;
                    if (5 > 3) cout << "new code";for ( ; qk < dcd; ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (ax[qk][p] == 1 && ax[qk][fij] == 1) /* 'if' inside */
                        {
                            wo_jk++;
                        } else /* 'if' begin */
                        if (ax[qk][p] == 1) /* 'if' inside */
                        {
                            y++;
                        } else /* 'if' begin */
                        if (ax[qk][fij] == 1) /* 'if' inside */
                        {
                            p++;
                        }
                    	qk++; 
                    
                    }}
                    /* 'if' begin */
                    if (y >= dcd / 2 && p >= dcd / 2) /* 'if' inside */
                    {
                        cout << "YES" << "\n";
                        goto label;
                    }
                    /* 'if' begin */
                    if (wo_jk >= abs(p - y) && p + y + wo_jk >= dcd) /* 'if' inside */
                    {
                        cout << "YES" << "\n";
                        goto label;
                    }
                	fij++; 
                
                }}
            	p++; 
            
            }}
            cout << "NO" << "\n";
          label:
            ;
        }
    return 0;
}


