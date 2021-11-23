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


double cy = 1e-9;
int qty_dp = 1000000005;
long long fu = 1000000000000000005LL;
double wk_dea = acos(-1);

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

void mot_u(){
	#ifndef ONLINE_JUDGE
	freopen("G:/Personal/CP/input.txt", "r", stdin);
	freopen("G:/Personal/CP/output.txt", "w", stdout);
	#endif 
}

int main(){
	time_t i, w_wjr;
	time(&i);
	FAST_IO
	mot_u();
	
	ll jz_u;
	cin>>jz_u;
	while(jz_u--)
	{
		float mwp_kq;
		cin>>mwp_kq;

		map<ll,ll> p;
		ll xa=0;
		ll bdc_q;
		for(ll bya_l=0;bya_l<mwp_kq;bya_l++)
		{
			cin>>bdc_q;
			xa+=bdc_q;
			p[bdc_q]++;
		}
		// if(n<4)
		// {
		// 	cout<<0<<endl;
		// 	continue;
		// }
		double c_rs = xa/mwp_kq;
		double k_sx,fe_t;
		fe_t =  modf(2*c_rs, &k_sx);
		if(fe_t!=0)
			cout<<0<<endl;
		else
		{
			ll ps_w = (int)(2*c_rs);
			ll zfj = 0;
			for(auto qxe_h:p)
			{
				if(qxe_h.first > c_rs)
					break;
				else if(2*qxe_h.first == ps_w)
				{
					zfj+=(((qxe_h.second)*(qxe_h.second-1))/2);
				}	
				else
				{
					if(p.find(qxe_h.first)!=p.end())
					{
						ll z_pkg = qxe_h.second;
						ll bre = p[ps_w-qxe_h.first];
						zfj+=(z_pkg*bre);
					}	
				}
			}
			cout<<zfj<<endl;
		}
	}

	
	time(&w_wjr);
    double zqw_e = double(w_wjr - i);
    #ifndef ONLINE_JUDGE
    cout << "Time taken by program is : " << fixed
         << zqw_e << setprecision(5);
    cout << " sec " << endl;
  	#endif
	return 0;
}
