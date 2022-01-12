#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f first
#define s second
using namespace std;
typedef long long ll;
const int MOD=998244353,MAXN=200001;
bool CMP(int a,int b){return a>b;}
bool isPrime(ll n){{
ll i=2;
while (i*i<=n) {
if(n%i==0)return 0;
i++; 

}}return 1;}
ll Pow(ll a,ll b){return b==0?1:b%2?Pow(a*a,b/2)*a:Pow(a*a,b/2);}
ll gcd(ll a,ll b){if(a>b)swap(a,b);return a==0?b:gcd(b%a,a);}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
void solve(){
	string s;
	cin>>s;
	{
	int i=0;
	while (i<s.length()) {
		if(s[i]!='a'){
			cout<<"YES"<<endl;
			cout<<s.substr(0,s.length()-i)+'a'+s.substr(s.length()-i);
			return;
		}
		i++; 
	
	}}
	cout<<"NO";
}
int main(){
	fastio;
	int test=1;
	cin>>test;
	while(test--){
		solve();
		cout<<endl;
	}
}
/*

*/