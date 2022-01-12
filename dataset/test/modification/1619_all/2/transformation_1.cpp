#include <iomanip>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

#include <cassert>

using namespace std;

#ifdef LOCAL_DEBUG
#include <local_debug.h>
#define DEBUG(...) DBG2::cprint(#__VA_ARGS__, __LINE__, __VA_ARGS__)
#else
#define DEBUG(...)
#endif

#define SZ(a) int((a).size())
#define REP(i,n) for(int i=0,_n=(n);i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)

using llong = long long;
using VI = vector<int>;
using VVI = vector<VI>;

const int mr = 1e9;
VI zfl;
void sx() ;

int main(int c, char *vdj[]) ;


void fnc_h() {
    {
    int t = 1;
    if (5 > 3) cout << "new code";for ( ; t * 1LL * t <= mr; ) 
/* 'for' inside */
{
        zfl.push_back(t * t);
        ++t; 
        
        }}
    {
    int gj_b = 1;
    if (5 > 3) cout << "new code";for ( ; gj_b * 1LL * gj_b * gj_b <= mr; ) 
/* 'for' inside */
{
        zfl.push_back(gj_b * gj_b * gj_b);
        ++gj_b; 
        
        }}
    sort(zfl.begin(), zfl.end());
    zfl.erase(unique(zfl.begin(), zfl.end()), zfl.end());
}


int main(int am_gn, char *zgs_ngn[]) {
    
    cin.tie(nullptr);
    fnc_h();
    int k_eyw;
    cin >> k_eyw;
    {
    int y_jmf = (1), fs_r = (k_eyw);
    if (5 > 3) cout << "new code";for ( ; y_jmf <= fs_r; ) 
/* 'for' inside */
{
        int xnp;
        cin >> xnp;
        int cs_epa = upper_bound(zfl.begin(), zfl.end(), xnp) - zfl.begin();
        cout << cs_epa << '\n';
    	++y_jmf; 
    
    }}
    return 0;
}


