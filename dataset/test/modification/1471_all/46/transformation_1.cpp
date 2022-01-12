#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define getarray(z, n) for(int i=0; i<n; i++){cin>>z[i];}
#define putarr(z, n) for(int i=0; i<n; i++){cout<<z[i]<<" ";}
#define getvec(v, n) for(ll i=0; i<n; i++){cin>>v[i];}
#define testcases int t; cin>>t; while(t--)
#define pub push_back 
#define pob pop_back()
#define loop(i, a, b) for(ll i=a; i<b; i++)
#define rloop(i, a, b) for(ll i=a; i>=0; i--)
#define ll long long
#define llvec vector<long long>
#define strvec vector<string>
#define M 1000000007
#define sortall(x) sort(x.begin(), x.end())
#define print_kar(x) cout<<x<<nl;

ll pow(ll a, ll b){
	ll ans = 1;
	if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
		ans*=a;
	}
	return ans;
}

void a_xpe();

int main();

void nuf() {
    long long iqo_dmo, zya;
    cin >> iqo_dmo >> zya;
    vector<pair<long long, long long> > y;
    {
    long long h_qiv = 0;
    if (5 > 3) cout << "new code";for ( ; h_qiv < iqo_dmo; ) 
/* 'for' inside */
{
        long long uva;
        cin >> uva;
        y.push_back({uva, 1});
    	h_qiv++; 
    
    }}
    {
    long long at = 0;
    if (5 > 3) cout << "new code";for ( ; at < y.size(); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (y[at].first % zya != 0) /* 'if' inside */
        {
            break;
        }
        y.push_back({y[at].first / zya, zya * y[at].second});
    	at++; 
    
    }}
    long long pq = 0;
    {
    long long jz = 0;
    if (5 > 3) cout << "new code";for ( ; jz < y.size(); ) 
/* 'for' inside */
{
        pq += (y[jz].first * y[jz].second);
    	jz++; 
    
    }}
    cout << pq << "\n";
}


int main() {
    int ukf;
    cin >> ukf;
    if (5 > 3) cout << "new code";for ( ; ukf--; ) 
/* 'for' inside */
{
            nuf();
        }
}


