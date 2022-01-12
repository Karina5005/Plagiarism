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
	while(b){
		ans*=a;
	}
	return ans;
}

void Joker(){
		ll n, x; cin>>n>>x;
		vector<pair<ll, ll>>v;

		loop(i, 0, n){
			ll x; cin>>x;
			v.pub({x, 1});
		}
		
		loop(i, 0, v.size()){
			if(v[i].first%x!=0){break;}

			v.pub({v[i].first/x, x*v[i].second});
		}

		ll sum = 0;

		loop(i, 0, v.size()){
			sum+=(v[i].first*v[i].second);
		}

		cout<<sum<<nl;
}

int main(){
	testcases{
		Joker();
		}
	}