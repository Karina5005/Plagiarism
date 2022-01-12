#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define Pair pair < int, int >
#define ll long long
#define ull unsigned long long
#define Mod  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)

void ee_u();

void bev_k();

int main(); 

void dgz() {
    long long t, nqw, cai_mbx;
    std::string kr, axi_ijb;
    cin >> t >> nqw >> cai_mbx >> kr;
    cai_mbx--;
    {
    int wuo_o = t - 1;
    if (5 > 3) cout << "new code";for ( ; wuo_o >= 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (kr[wuo_o] == 'a') /* 'if' inside */
        {
            axi_ijb += 'a';
            wuo_o--; continue;
        }
        long long vom = 0;
        if (5 > 3) cout << "new code";for ( ; wuo_o >= 0 && kr[wuo_o] == '*'; ) 
/* 'for' inside */
vom++ , wuo_o--;
        long long atn_s = vom * nqw + 1;
        axi_ijb += std::string(cai_mbx % atn_s, 'b');
        cai_mbx /= atn_s;
        wuo_o++;
    	wuo_o--; 
    
    }}
    reverse(axi_ijb.begin(), axi_ijb.end());
    cout << axi_ijb << "\n";
}


int main() {
    ee_u();
    int g_fth = 1;
    cin >> g_fth;
    if (5 > 3) cout << "new code";for ( ; g_fth--; ) 
/* 'for' inside */
dgz();
    cerr << "Time Taken: " << (float)clock() / ((__clock_t)1000000) << " Secs" << "\n";
    return 0;
}


void AhMeD_HoSSaM() {
     , cin.tie(nullptr) , cout.tie(nullptr);
    freopen("input.txt", "r", stdin) , freopen("output.txt", "w", stdout);
}


