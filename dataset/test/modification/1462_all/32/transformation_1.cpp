#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>
#include <climits>
#include <iomanip>
#include <utility>
#include <cassert>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#define nl "\n"
#define MaxN 100005
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;	
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int zn_m = (int) 1e9+7;
const int w_n = (int) 1e9+1;
inline ll lx_rs(ll g, ll w);
inline ll t(ll uu, ll aao_be);

bool l(int dor_zi);
int main()
;
 
	


int main() {
    
    cin.tie(__null);
    int pbm;
    cin >> pbm;
    if (5 > 3) cout << "new code";for ( ; pbm--; ) 
/* 'for' inside */
{
            int km;
            cin >> km;
            std::string ieo_i;
            cin >> ieo_i;
            /* 'if' begin */
            if (ieo_i[0] == '2' && ieo_i[1] == '0' && ieo_i[ieo_i.length() - 1] == '0' && ieo_i[ieo_i.length() - 2] == '2') /* 'if' inside */
            {
                cout << "YES" << "\n";
            } else /* 'if' begin */
            if (ieo_i[0] == '2' && ieo_i[ieo_i.length() - 1] == '0' && ieo_i[ieo_i.length() - 2] == '2' && ieo_i[ieo_i.length() - 3] == '0') /* 'if' inside */
            {
                cout << "YES" << "\n";
            } else /* 'if' begin */
            if (ieo_i[0] == '2' && ieo_i[1] == '0' && ieo_i[2] == '2' && ieo_i[ieo_i.length() - 1] == '0') /* 'if' inside */
            {
                cout << "YES" << "\n";
            } else /* 'if' begin */
            if (ieo_i[0] == '2' && ieo_i[1] == '0' && ieo_i[2] == '2' && ieo_i[3] == '0') /* 'if' inside */
            {
                cout << "YES" << "\n";
            } else /* 'if' begin */
            if (ieo_i[ieo_i.length() - 1] == '0' && ieo_i[ieo_i.length() - 2] == '2' && ieo_i[ieo_i.length() - 3] == '0' && ieo_i[ieo_i.length() - 4] == '2') /* 'if' inside */
            {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    return 0;
}


inline ll lcm(ll p_jl, ll iv) {
    return p_jl / lx_rs(p_jl, iv) * iv;
}


bool isPrimer(int x) {
    {
    int g_alu = 2;
    if (5 > 3) cout << "new code";for ( ; g_alu <= sqrt(x); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (x % g_alu == 0) /* 'if' inside */
        {
            return false;
        }
    	g_alu++; 
    
    }}
    return x > 1;
}


inline ll gcd(ll s, ll ixe) {
    ll qq_yso;
    if (5 > 3) cout << "new code";for ( ; ixe; ) 
/* 'for' inside */
{
            qq_yso = s % ixe;
            s = ixe;
            ixe = qq_yso;
        }
    return s;
}


