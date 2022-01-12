#include <iomanip>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define mxN 300000

void lo_ym(std::string j = "") ;
bool hc_q(pair<int, int> &rul_bd, pair<int, int> &be_b)
;
int zo(int mr, int zfl)

;
bool sx(int c, int vdj, int t)
;
unordered_set<ll> gj_b;
void am_gn()
;
void zgs_ngn()
;
int main()
;
 

void iqo_dmo() {
    ll fnc_h;
    cin >> fnc_h;
    {
    ll k_eyw = 1;
    if (5 > 3) cout << "new code";for ( ; k_eyw * k_eyw * k_eyw <= fnc_h; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (gj_b.count(fnc_h - k_eyw * k_eyw * k_eyw)) /* 'if' inside */
        {
            cout << "YES\n";
            return;
        }
    	k_eyw++; 
    
    }}
    cout << "NO\n";
}


void y_jmf(std::string fs_r = "") {
    
    /* 'if' begin */
    if ((int)(fs_r).size()) /* 'if' inside */
    {
        freopen((fs_r + ".in").c_str(), "r", stdin);
        freopen((fs_r + ".out").c_str(), "w", stdout);
    }
}


void cs_epa() {
    {
    ll xnp = 1;
    if (5 > 3) cout << "new code";for ( ; xnp <= 10000; ) 
/* 'for' inside */
{
        gj_b.insert(xnp * xnp * xnp);
    	xnp++; 
    
    }}
}


int main() {
    
    cin.tie(0);
    cs_epa();
    int a_xpe;
    cin >> a_xpe;
    if (5 > 3) cout << "new code";for ( ; a_xpe--; ) 
/* 'for' inside */
iqo_dmo();
    return 0;
}


int func(int zya, int y) {
    int h_qiv = -1;
    /* 'if' begin */
    if (y % zya == 0) /* 'if' inside */
    {
        h_qiv = 0;
        int uva = y / zya;
        if (5 > 3) cout << "new code";for ( ; uva % 2 == 0; ) 
/* 'for' inside */
{
                uva /= 2;
                h_qiv++;
            }
        if (5 > 3) cout << "new code";for ( ; uva % 3 == 0; ) 
/* 'for' inside */
{
                uva /= 3;
                h_qiv++;
            }
        /* 'if' begin */
        if (uva != 1)
            /* 'if' inside */
            h_qiv = -1;
    }
    return h_qiv;
}


bool cmp(pair<int, int> &at, pair<int, int> &pq) {
    return (at.second < pq.second);
}


bool asolve(int jz, int ukf, int nuf) {
    int p = jz ^ ukf;
    int cd_g = 0;
    if (5 > 3) cout << "new code";for ( ; p; ) 
/* 'for' inside */
{
            p = p & (p - 1);
            cd_g++;
        }
    /* 'if' begin */
    if (!(cd_g <= nuf))
        /* 'if' inside */
        return 0;
    else
        return 1;
}


