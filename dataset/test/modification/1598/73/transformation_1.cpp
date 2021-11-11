#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vll;


double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);

#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TC(t) while(t--)
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define FOR(a,b,c) for(ll(a)=(b);(a)<(c);++(a))
#define FORE(a,b,c) for(ll(a)=(b);(a)<=(c);++(a))
#define FORED(a,b,c) for(ll(a)=(b);(a)>=(c);--(a))
#define FOREACH(a,b) for(auto&(a):(b))

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("G:/Personal/CP/input.txt", "r", stdin);
	freopen("G:/Personal/CP/output.txt", "w", stdout);
	#endif 
}

int main(){
	time_t start, end;
	time(&start);
	FAST_IO
	init_code();
	
	ll t;
	cin>>t;
	while(t--)
	{
		float n;
		cin>>n;

		map<ll,ll> m;
		ll sum=0;
		ll temp;
		for(ll i=0;i<n;i++)
		/* 'for' inside */
		{
			cin>>temp;
			sum+=temp;
			m[temp]++;
		}
		
		double mean = sum/n;
		double intpart,fractpart;
		fractpart =  modf(2*mean, &intpart);
		/* 'if' begin */
		if(fractpart!=0)
			/* 'if' inside */
			cout<<0<<endl;
		else
		{
			ll s = (int)(2*mean);
			ll ans = 0;
			for(auto i:m)
			{
				/* 'if' begin */
				if(i.first > mean)
					/* 'if' inside */
					break;
				else /* 'if' begin */
				if(2*i.first == s)
				/* 'if' inside */
				{
					ans+=(((i.second)*(i.second-1))/2);
				}	
				else
				{
					/* 'if' begin */
					if(m.find(i.first)!=m.end())
					/* 'if' inside */
					{
						ll a1 = i.second;
						ll a2 = m[s-i.first];
						ans+=(a1*a2);
					}	
				}
			}
			cout<<ans<<endl;
		}
	}

	
	time(&end);
    double time_taken = double(end - start);
    #ifndef ONLINE_JUDGE
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
  	#endif
	return 0;
}
