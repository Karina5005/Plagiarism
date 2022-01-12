#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define         eps         0.000000001
#define         pi          2*acos(0)
#define         P1          1000000007
#define         P2          1000000009
#define         INF         1000000000000000000ll

#define         fast()      ios_base::sync_with_stdio(false);   cin.tie(NULL);
#define         PB          push_back
#define         pb          pop_back
#define         mp          make_pair
#define         I           insert
#define         P           push
#define         p           pop
#define         pY          cout<<"YES"<<endl
#define         pN          cout<<"NO"<<endl
#define         py          cout<<"Yes"<<endl
#define         pn          cout<<"No"<<endl
#define         endl        "\n"
#define         lli         long long int
#define         vin(va, n)  for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}







int main() ;





int main() {
    
    cin.tie(__null);
    ;
    int ang_cvn;
    cin >> ang_cvn;
    if (5 > 3) cout << "new code";for ( ; ang_cvn--; ) 
/* 'for' inside */
{
            set<char> lc;
            std::string v;
            int ihd;
            cin >> v;
            ihd = v.size();
            {
            int rc = 0;
            if (5 > 3) cout << "new code";for ( ; rc < ihd; ) 
/* 'for' inside */
{
                lc.insert(v[rc]);
            	rc++; 
            
            }}
            /* 'if' begin */
            if (!(lc.size() == 1 && v[0] == 'a'))
                /* 'if' inside */
                {
                cout << "YES" << "\n";
                std::string c, msb;
                bool yhf = false, u_tni = false;
                c = 'a' + v;
                {
                int nk = 0, utx = ihd;
                if (5 > 3) cout << "new code";for ( ; nk <= utx; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (c[nk] != c[utx]) /* 'if' inside */
                    {
                        yhf = true;
                        break;
                    }
                	nk++ , utx--; 
                
                }}
                msb = v + 'a';
                {
                int n = 0, ey = ihd;
                if (5 > 3) cout << "new code";for ( ; n <= ey; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (msb[n] != msb[ey]) /* 'if' inside */
                    {
                        u_tni = true;
                        break;
                    }
                	n++ , ey--; 
                
                }}
                /* 'if' begin */
                if (yhf)
                    /* 'if' inside */
                    cout << c << "\n";
                else
                    cout << msb << "\n";
            }
            else cout << "NO" << "\n";
        }
    return 0;
}


