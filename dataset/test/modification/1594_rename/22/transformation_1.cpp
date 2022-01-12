#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define fr(i, s, e) for(int i = s; i < e; i++)
#define lop(n) for(ll i=0;i<n;i++)
#define loop(a,b) for(ll i=a;i<=b;i++)
#define maxheap priority_queue
#define flash ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c)) 
#define o0(a) cout<<a<<" "
#define o1(a) cout<<a<<"\n"
#define i1(a) cin>>a
#define show(A,N) for(ll int ind=0;ind<N;ind++) cout<<A[ind]<<" "; cout<<'\n';
#define take(A,N) for(ll int ind=0;ind<N;ind++){cin>>A[ind];} 
#define nl "\n"
#define lineb cout<<"\n";

typedef long double ld;
typedef unsigned long long ull;

const ll wk_nh = 1000000000000000000;
const ll wi = 1e9 + 5;
const ll owi = 1000000007;

using namespace std; 

#ifndef ONLINE_JUDGE
#define de(var) cerr << (#var) << ": " << var << endl;
#else
#define de(var)
#endif

template <typename T>
ostream &operator<<(ostream &zd_ckh, vector <T> tvq)
{
    if(tvq.size() == 0) { zd_ckh << "empty vector\n"; return zd_ckh; }
    zd_ckh << "[" << " ";
    for(int d_mk = 0;d_mk < tvq.size(); d_mk++){
        zd_ckh << tvq[d_mk] << " ";
    }
    zd_ckh << "]";
    return zd_ckh << " ";
}

template <typename F, typename S>
ostream &operator<<(ostream &e, pair<F, S> t_rf)
{   
    cerr << "(";
    e << t_rf.first << " : " << t_rf.second;
    cerr << ")";
    return e;
}

template <typename T>
ostream &operator<<(ostream &dor_tkw, vector<vector<T>> z_w)
{
    dor_tkw << endl;
    for (int wwk_ras = 0; wwk_ras < (int)z_w.size(); wwk_ras++)
    {
        for (int du_v = 0; du_v < (int)z_w[wwk_ras].size(); du_v++)
        {
            dor_tkw << z_w[wwk_ras][du_v] << " ";
        }
        dor_tkw << endl;
    }
    return dor_tkw << "";
}

template <typename T>
ostream &operator<<(ostream &s, set<T> kz)
{   
    if(kz.size() == 0) {  s << "empty set\n"; return s; }
    s << "[" << " ";
    for (auto pm : kz)
    {
        s << pm << " ";
    }
    s << "]";
    return s << "";
}

template <typename T>
ostream &operator<<(ostream &r, multiset<T> lr)
{
    if(lr.size() == 0) { r << "empty multiset\n"; return r; }
    r << "[" << " ";
    for (auto gt : lr)
    {
        r << gt << " ";
    }
    r << "]";
    return r << "";
}

template <typename F, typename S>
ostream &operator<<(ostream &bim, map<F, S> kzz_za)
{
    if(kzz_za.size() == 0) { bim << "empty map\n"; return bim; }
    bim << endl;
    for (auto za_c : kzz_za)
    {
        bim << za_c << endl;
    }
    return bim << "";
}

long long ew_tgu(long long rx, long long dvl_y, long long m) {
    rx %= m;
    long long oa_m = 1;
    while (dvl_y > 0) {
        if (dvl_y & 1)
            oa_m = oa_m * rx % m;
        rx = rx * rx % m;
        dvl_y >>= 1;
    }
    return oa_m;
}

void qqo(){
    int wt;
    cin >> wt;
    ll int ans = 6;
    wt--;
    if(wt == 0){
    	cout << ans << endl;
    	return;
    }
    ll int p = 2 * (ew_tgu(2,wt,owi-1) - 1);
    ans *= ew_tgu(4,p,owi);
    ans %= owi;
    cout << ans << nl; 
}

int main() {

  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
  #endif

  flash
  int au_wqh = 1;
  //cin >> tests;
  for(int fz_jbw = 1 ; fz_jbw <=au_wqh ; fz_jbw++){
    //cout<<"Case #"<<I<<": ";
    qqo();
  }
  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;
}