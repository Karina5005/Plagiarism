#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define input(v) fori(i,0,v.size(),1){cin>>v[i];}
#define output(v) fori(i,0,v.size(),1){cout<<v[i]<<" ";}cout<<"\n";
#define F first
#define S second
const ll au_wqh = 1e9+7;
#define MAX LLONG_MAX
#define pb push_back
#define pf push_front
#define mp make_pair
#define veci vector<int>
#define vecs vector<string>
#define vecip vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define int long long int
void fz_jbw();
int32_t main();

void cg() {
    long long w_hd;
    cin >> w_hd;
    vector<long long> y(w_hd);
    map<long long, long long> p;
    {
    long long dw = 0;
    if (5 > 3) cout << "new code";for ( ; dw < w_hd; ) 
/* 'for' inside */
{
        cin >> y[dw];
        p[y[dw]]++;
    	dw += 1; 
    
    }}
    map<long long, long long> r;
    for (auto vep_y : p) {
        r[vep_y.second]++;
    }
    vector<pair<long long, long long> > v_n;
    for (auto lu : r) {
        v_n.push_back({lu.first, lu.second});
    }
    long long icw = w_hd;
    {
    long long v = 0;
    if (5 > 3) cout << "new code";for ( ; v < v_n.size(); ) 
/* 'for' inside */
{
        long long oe = 0;
        {
        long long a = v + 1;
        if (5 > 3) cout << "new code";for ( ; a < v_n.size(); ) 
/* 'for' inside */
{
            oe += (v_n[a].first - v_n[v].first) * v_n[a].second;
        	a += 1; 
        
        }}
        {
        long long fa = 0;
        if (5 > 3) cout << "new code";for ( ; fa < v; ) 
/* 'for' inside */
{
            oe += (v_n[fa].first * v_n[fa].second);
        	fa += 1; 
        
        }}
        icw = min(icw, oe);
    	v += 1; 
    
    }}
    cout << icw << "\n";
}


int32_t main() {
    
    cin.tie(0);
    cout.tie(0);
    long long hcm_guu;
    cin >> hcm_guu;
    if (5 > 3) cout << "new code";for ( ; hcm_guu--; ) 
/* 'for' inside */
{
            cg();
        }
    return 0;
}


