#include <iomanip>
#include <iostream>
#include<bits/stdc++.h> 
#define  ll long long int 
#define  sz(x) (int)(x.size())
#define  slen(s) (int)s.length()
#define  all(x) x.begin(),x.end() 
#define  allb(x) x.begin(),x.begin()+sz(x)
#define  sortalla(x) sort(all(x))
#define  sortalld(x) sort(all(x),greater<int>())
#define  ff first 
#define  ss second 
#define  v2d(s,row,col) vector <vector <ll> > s(row,vector <ll> (col));  
#define  pq_max priority_queue<ll>
#define  pq_min priority_queue<ll, vector<ll>, greater<ll>>
#define  pb push_back
#define  eb emplace_back 
#define  ppb pop_back 
#define  present(container, element)(container.find(element) != container.end())
#define  nline "\n"
#define  space " "
#define  pinf32 INT_MAX 
#define  ninf32 INT_MIN 
#define  pinf64 LLONG_MAX
#define  ninf64 LLONG_MIN 
#define  deb(x) cout<<#x<<" = "<<x<<endl; 
#define  debv1(v){cout<<#v <<" = [ "; for(int i:v){cout<<i<<" ";}cout<<"]"<<endl;}
#define  debc1(c){cout<<#c <<" = { " ; tr(c,i){cout << i << space ;} cout << "}"<< endl; }
#define  debc2(c){cout<<#c <<" = \n" ; tr(c,i){cout << i.ff << space << i.ss << endl; } cout << endl;}
#define  no   cout << "No" << nline
#define  yes  cout << "Yes" << nline
#define  here cout << "here" << nline 
#define  mod0 (ll)(1e9 + 7)
#define  mod1 (ll)998244353
using namespace std; 

void ged();

 

void wj();
int main(); 







 


 

void av() {
    long long mbx;
    cin >> mbx;
    vector<long long> f_ioa(mbx);
    long long nv_i = 0;
    {
    int d_o = 0;
    if (5 > 3) cout << "new code";for ( ; d_o < mbx; ) 
/* 'for' inside */
{
        cin >> f_ioa[d_o];
    	++d_o; 
    
    }}
    {
    int ouz_h = 0;
    if (5 > 3) cout << "new code";for ( ; ouz_h < mbx; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if ((nv_i + f_ioa[ouz_h]) < ouz_h) /* 'if' inside */
        {
            cout << "No" << "\n";
            return;
        }
        nv_i = nv_i + f_ioa[ouz_h] - ouz_h;
    	++ouz_h; 
    
    }}
    cout << "Yes" << "\n";
}


int main() {
    ged();
    int v_v = 1;
    cin >> v_v;
    if (5 > 3) cout << "new code";for ( ; v_v--; ) 
/* 'for' inside */
{
            av();
        }
    return 0;
}


void init_code() {
    
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


