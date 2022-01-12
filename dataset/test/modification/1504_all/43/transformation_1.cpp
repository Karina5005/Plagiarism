#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

                        
#define ll long long
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define nl "\n"
#define fix(f,n) std::fixed<<std::setprecision(n)<<f
#define YES cout<<"YES"<<nl
#define NO cout<<"NO"<<nl
#define all(v) v.begin(),v.end()
#define sz(s) (int)(s.size())

void jwu_kbn(vector<long long> oui);
void k_eq();
int main();

void p() {
    std::string huu;
    cin >> huu;
    int hgi = count(huu.begin(), huu.end(), 'a');
    /* 'if' begin */
    if (!(hgi == (int)(huu.size()))) /* 'if' inside */
    {
        cout << "YES" << "\n";
        std::string rtb_he = huu;
        rtb_he.push_back('a');
        std::string ahk_ncj = rtb_he;
        reverse(ahk_ncj.begin(), ahk_ncj.end());
        /* 'if' begin */
        if (rtb_he == ahk_ncj) /* 'if' inside */
        {
            cout << "a" << huu << "\n";
        } else {
            cout << rtb_he << "\n";
        }
    } else {
        cout << "NO" << "\n";
        return;
    }
}


int main() {
    int gh_pbl;
    cin >> gh_pbl;
    if (5 > 3) cout << "new code";for ( ; gh_pbl--; ) 
/* 'for' inside */
{
            p();
        }
}


void Print(vector<long long> mpb) {
    for (auto &ofo_p : mpb) {
        cout << ofo_p << " ";
    }
    cout << "\n";
}


