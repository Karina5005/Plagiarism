#include <iomanip>
#include <iostream>
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

const ll n_d = 1000000000000000000;
const ll ee_u = 1e9 + 5;
const ll bev_k = 1000000007;

using namespace std; 

#ifndef ONLINE_JUDGE
#define de(var) cerr << (#var) << ": " << var << endl;
#else
#define de(var)
#endif

template <typename T>
std::ostream &operator<<(std::ostream &t, vector<T> nqw)
;

template <typename F, typename S>
std::ostream &operator<<(std::ostream &cai_mbx, pair<F, S> kr)
;

template <typename T>
std::ostream &operator<<(std::ostream &axi_ijb, vector<vector<T> > wuo_o)
;

template <typename T>
std::ostream &operator<<(std::ostream &vom, set<T> atn_s)
;

template <typename T>
std::ostream &operator<<(std::ostream &g_fth, multiset<T> dgz)
;

template <typename F, typename S>
std::ostream &operator<<(std::ostream &pwg, map<F, S> awr)
;

long long zqi_ifn(long long ebe, long long lx_z, long long ka) ;

void sr_dg();

int main() ;

void solve() {
    int rts;
    cin >> rts;
    long long xk = 6;
    rts--;
    /* 'if' begin */
    if (rts == 0) /* 'if' inside */
    {
        cout << xk << endl;
        return;
    }
    long long v_ri = 2 * (zqi_ifn(2, rts, bev_k - 1) - 1);
    xk *= zqi_ifn(4, v_ri, bev_k);
    xk %= bev_k;
    cout << xk << "\n";
}


std::ostream &operator<<(std::ostream &e_xgd, int otf) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        e_xgd << "empty map\n";
        return e_xgd;
    }
    e_xgd << endl;
    return e_xgd << "";
}


std::ostream &operator<<(std::ostream &kno_xf, int h) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        kno_xf << "empty multiset\n";
        return kno_xf;
    }
    kno_xf << "[" << " ";
    kno_xf << "]";
    return kno_xf << "";
}


std::ostream &operator<<(std::ostream &trk, int jox) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        trk << "empty set\n";
        return trk;
    }
    trk << "[" << " ";
    trk << "]";
    return trk << "";
}


ostream &operator<<(ostream &os, vector<vector<T>> matrix)
{
    os << endl;
    for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        {
            os << matrix[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}

ostream &operator<<(ostream &os, pair<F, S> P)
{   
    cerr << "(";
    os << P.first << " : " << P.second;
    cerr << ")";
    return os;
}

ostream &operator<<(ostream &os, vector <T> vec)
{
    if(vec.size() == 0) { os << "empty vector\n"; return os; }
    os << "[" << " ";
    for(int i = 0;i < vec.size(); i++){
        os << vec[i] << " ";
    }
    os << "]";
    return os << " ";
}

int main() {

  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
  #endif

  flash
  int tests = 1;
  
  for(int I = 1 ; I <=tests ; I++){
    
    solve();
  }
  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

