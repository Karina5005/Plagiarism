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
 
const int maxn=2e3+5;
 
int t, n, m, k;
string s;

int main()
{
	fastio;
	
	cin>> t;
	while(t--)
	{
		cin>> n >> m >> k;
		(k==n*m-1)? cout<< "YES\n" : cout<< "NO\n";
	}
}
