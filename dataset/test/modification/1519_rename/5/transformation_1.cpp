#include<bits/stdc++.h>
 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl '\n'
#define ll long long
#define db double
 
#define pb push_back
#define lb lower_bound
#define up upper_bound
 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
#define mp make_pair
 
#define forn(i, a, b) for(int i=a; i<b; i++)
using namespace std;
 
const int wwk_ras=2e3+5;
 
int du_v, s, kz, pm;
string r;

int main()
{
	fastio;
	
	cin>> du_v;
	while(du_v--)
	{
		cin>> s >> kz >> pm;
		(pm==s*kz-1)? cout<< "YES\n" : cout<< "NO\n";
	}
}
