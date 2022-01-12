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

const ll binf = 1000000000000000000;
const ll inf = 1e9 + 5;
const ll in = 1000000007;

using namespace std; 

#ifndef ONLINE_JUDGE
#define de(var) cerr << (#var) << ": " << var << endl;
#else
#define de(var)
#endif

template <typename T>
ostream &operator<<(ostream &os, vector <T> vec)
{
    /* 'if' begin */
    if(vec.size() == 0) /* 'if' inside */
    { os << "empty vector\n"; return os; }
    os << "[" << " ";
    for(int i = 0;i < vec.size(); i++)/* 'for' inside */
    {
        os << vec[i] << " ";
    }
    os << "]";
    return os << " ";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, pair<F, S> P)
{   
    cerr << "(";
    os << P.first << " : " << P.second;
    cerr << ")";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> matrix)
{
    os << endl;
    for (int i = 0; i < (int)matrix.size(); i++)
    /* 'for' inside */
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        /* 'for' inside */
        {
            os << matrix[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}

template <typename T>
ostream &operator<<(ostream &os, set<T> S)
{   
    /* 'if' begin */
    if(S.size() == 0) /* 'if' inside */
    {  os << "empty set\n"; return os; }
    os << "[" << " ";
    for (auto s : S)
    {
        os << s << " ";
    }
    os << "]";
    return os << "";
}

template <typename T>
ostream &operator<<(ostream &os, multiset<T> S)
{
    /* 'if' begin */
    if(S.size() == 0) /* 'if' inside */
    { os << "empty multiset\n"; return os; }
    os << "[" << " ";
    for (auto s : S)
    {
        os << s << " ";
    }
    os << "]";
    return os << "";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, map<F, S> M)
{
    /* 'if' begin */
    if(M.size() == 0) /* 'if' inside */
    { os << "empty map\n"; return os; }
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    ll int ans = 6;
    n--;
    /* 'if' begin */
    if(n == 0)/* 'if' inside */
    {
    	cout << ans << endl;
    	return;
    }
    ll int p = 2 * (binpow(2,n,in-1) - 1);
    ans *= binpow(4,p,in);
    ans %= in;
    cout << ans << nl; 
}

int main() {

  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
  #endif

  flash
  int tests = 1;
  
  for(int I = 1 ; I <=tests ; I++)/* 'for' inside */
  {
    
    solve();
  }
  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;
}