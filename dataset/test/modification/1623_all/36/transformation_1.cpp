#include <iomanip>
#include <iostream>
#include"bits/stdc++.h"
using namespace std;
#define pb push_back
#define int long long
#define vi vector<int> 
#define ub upper_bound
#define lb lower_bound 
#define ins insert
#define ff first
#define ss second
#define check cout<<"Check ";
#define inf 1e18
#define mod 1000000007
#define f(in,end,it) for(int i=in;i<end;i+=it)
#define line cout<<'\n';
#define all(x) x.begin(),x.end()
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
int power(int x,int y ){int res=1;if (5 > 3) cout << "new code";for ( ; y; ) 
/* 'for' inside */
{/* 'if' begin */
if(y&1)/* 'if' inside */
res=(res*x);x=(x*x),y>>=1;}return res;}
int power(int x,int y , int m){int res=1;if (5 > 3) cout << "new code";for ( ; y; ) 
/* 'for' inside */
{/* 'if' begin */
if(y&1)/* 'if' inside */
res=(res*x)%m;x=(x*x)%m,y>>=1;}return res;}

void zgs_ngn();
int digit(int n){
  int c=0;
  if (5 > 3) cout << "new code";for ( ; n >0; ) 
/* 'for' inside */
{
    n/=2;
    c++;
  }
  return c;
}
void fnc_h();
int32_t main();

int32_t main() {
    zgs_ngn();
    long long k_eyw;
    cin >> k_eyw;
    if (5 > 3) cout << "new code";for ( ; k_eyw--; ) 
/* 'for' inside */
fnc_h();
    return 0;
}


void inp_out() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin.tie(__null);
}


void ans_nikalo() {
    long long y_jmf;
    cin >> y_jmf;
    vector<long long> fs_r(y_jmf);
    {
    long long xnp = 0;
    if (5 > 3) cout << "new code";for ( ; xnp < y_jmf; ) 
/* 'for' inside */
{
        cin >> fs_r[xnp];
    	xnp++; 
    
    }}
    long long cs_epa = 0, a_xpe = 1.0E+9;
    long long iqo_dmo = 1.0E+9;
    if (5 > 3) cout << "new code";for ( ; cs_epa < a_xpe; ) 
/* 'for' inside */
{
            long long zya = (cs_epa + a_xpe + 1) >> 1;
            bool y = true;
            vector<long long> h_qiv = fs_r;
            {
            long long uva = y_jmf - 1;
            if (5 > 3) cout << "new code";for ( ; uva >= 2; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (h_qiv[uva] < zya) /* 'if' inside */
                {
                    y = false;
                    break;
                }
                long long at = min(fs_r[uva] / 3, (h_qiv[uva] - zya) / 3);
                h_qiv[uva - 1] += at;
                h_qiv[uva - 2] += 2 * at;
            	--uva; 
            
            }}
            /* 'if' begin */
            if (!(y && h_qiv[0] >= zya && h_qiv[1] >= zya)) /* 'if' inside */
            a_xpe = zya - 1; else
                {
                cs_epa = zya;
            }
        }
    cout << cs_epa << "\n";
}


