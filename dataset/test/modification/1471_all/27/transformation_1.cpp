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


ll pow(ll a, ll b){
	ll ans = 1;
	if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
		ans*=a;
	}
	return ans;
}

void vea();

int main();

int main() {
    int xh_wr;
    cin >> xh_wr;
    if (5 > 3) cout << "new code";for ( ; xh_wr--; ) 
/* 'for' inside */
{
            vea();
        }
}


void Joker() {
    long long ae, jba_k;
    cin >> ae >> jba_k;
    vector<pair<long long, long long> > i;
    {
    long long am = 0;
    if (5 > 3) cout << "new code";for ( ; am < ae; ) 
/* 'for' inside */
{
        long long a;
        cin >> a;
        i.push_back({a, 1});
    	am++; 
    
    }}
    {
    long long lvv = 0;
    if (5 > 3) cout << "new code";for ( ; lvv < i.size(); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (i[lvv].first % jba_k != 0) /* 'if' inside */
        {
            break;
        }
        i.push_back({i[lvv].first / jba_k, jba_k * i[lvv].second});
    	lvv++; 
    
    }}
    long long agc = 0;
    {
    long long uep_xjt = 0;
    if (5 > 3) cout << "new code";for ( ; uep_xjt < i.size(); ) 
/* 'for' inside */
{
        agc += (i[uep_xjt].first * i[uep_xjt].second);
    	uep_xjt++; 
    
    }}
    cout << agc << "\n";
}


