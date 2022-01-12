#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define messi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lld long long int
#define ulld unsigned long long
#define vll vector<lld>
#define pll pair<lld,lld>
#define mll map<lld,lld>
#define sll set<lld>
#define pb push_back
#define ss second
#define ff first
#define mp make_pair
#define MOD 1000000007 
#define answer(x) cout<<endl<<"answer : "<<x<<endl<<endl;
#define out(x) cout<<x<<endl;
#define MAXN 500005
#define lld_max 5000000000000000000
using namespace std;
int main() ;



int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    long long jox = 1;
    cin >> jox;
    if (5 > 3) cout << "new code";for ( ; jox--; ) 
/* 'for' inside */
{
            long long hu_d = 0, io_i = 0, k_s = 0, pvq_dlp = 0, i_r = 0, av = 0, cxp_e = 0, eq_d = 0, yb = 0, qf_ux = 0, yjm = 0, fve = 0, cd_v = 0, exe_mj = 0, cp = 0, z_yg = 0, h = 0, stg = 0, rb = 0, fdg = 0, iev_mv = 0, ky_fzo = 0;
            std::string kxt;
            bool keo = false;
            cin >> hu_d >> kxt;
            {
            pvq_dlp = 0;
            if (5 > 3) cout << "new code";for ( ; pvq_dlp < hu_d; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (kxt[pvq_dlp] == '0')
                    /* 'if' inside */
                    yjm++;
                    pvq_dlp++; 
                    
                    }}
            /* 'if' begin */
            if (!(kxt[0] != '1' || kxt[hu_d - 1] != '1' || (yjm % 2 == 1) || (hu_d % 2 == 1)))
                /* 'if' inside */
                {
                cout << "YES" << endl;
                std::string ow = "", xev = "";
                i_r = hu_d - yjm;
                {
                pvq_dlp = 0;
                if (5 > 3) cout << "new code";for ( ; pvq_dlp < hu_d; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (kxt[pvq_dlp] == '1') /* 'if' inside */
                    {
                        av++;
                        /* 'if' begin */
                        if (av <= i_r / 2)
                            /* 'if' inside */
                            ow += '(' , xev += '(';
                        else
                            ow += ')' , xev += ')';
                    } else {
                        cxp_e++;
                        /* 'if' begin */
                        if (cxp_e & 1)
                            /* 'if' inside */
                            ow += '(' , xev += ')';
                        else
                            ow += ')' , xev += '(';
                    }
                	pvq_dlp++; 
                
                }}
                cout << ow << endl << xev << endl;
            }
            else cout << "NO" << endl;
        }
    return 0;
}


