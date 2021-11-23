	#include<bits/stdc++.h>
	// #include<ext/pb_ds/assoc_container.hpp>
	// #include<ext/pb_ds/tree_policy.hpp>
	#pragma GCC optimize("O3")
	#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
	#pragma GCC optimize("unroll-loops")

	using namespace std;
	using namespace chrono;
	// using namespace __gnu_pbds;

	#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
	#define MOD 1000000007
	#define MOD1 998244353
	#define INF 1e18
	#define endl "\n"
	#define pb push_back
	#define ppb pop_back
	//#define mp make_pair
	#define ff first
	#define ss second
	#define PI 3.141592653589793238462
	#define set_bits __builtin_popcountll
	#define sz(x) ((int)(x).size())
	#define all(x) (x).begin(), (x).end()
	#define mset(a , b) memset(a , b , sizeof(a))
	#define ll long long int


	#ifndef ONLINE_JUDGE
	    #define dbg(x) cerr << #x << " : "; _print(x); cerr << endl;
	    //#define pt(x) cerr << "\n---------Testcase " << x << "---------\n" << endl;
	#else
	    #define dbg(x) ;
	    //#define pt(x) ;
	#endif
	 
	void kg_r(unsigned short r){ cerr << r; }
	void b_e(short i){ cerr << i; }
	void gqa_ik(unsigned int e){ cerr << e; }
	void opt_uo(int z_yiv){ cerr << z_yiv; }
	void dh_xqm(unsigned long si_yg){ cerr << si_yg; }
	void tr_e(long m_b){ cerr << m_b; }
	void mb_jr(unsigned long long dtv){ cerr << dtv; }
	void c(long long d){ cerr << d; }
	void q(float b_pj){ cerr << b_pj; }
	void i(double tn){ cerr << tn; }
	void r(long double fx){ cerr << fx; }
	void nqy(unsigned char n){ cerr << n; }
	void mzp(char yl_ql){ cerr << yl_ql; }
	void pad_chw(string rx_s){ cerr << rx_s; }
	 
	template<typename A> void _print(vector<A> m);
	template<typename A, typename B> void _print(pair<A, B> lml);
	template<typename A> void _print(set<A> dnb_uri);
	template<typename A, typename B> void _print(map<A, B> j_py);
	template<typename A> void _print(multiset<A> ppc_jx);
	template<typename A, typename B> void _print(multimap<A, B> nq);
	template<typename A> void _print(unordered_set<A> bot);
	template<typename A, typename B> void _print(unordered_map<A, B> mcg_cqk);
	template<typename A> void _print(unordered_multiset<A> n);
	template<typename A, typename B> void _print(unordered_multimap<A, B> tgw_xb);
	template<typename A> void _print(stack<A> cu);
	template<typename A> void _print(queue<A> nwq_coh);
	template<typename A> void _print(priority_queue<A> ix);
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> z_d);
	 
	template<typename A> void _print(vector<A> vz_ycf){ if(!vz_ycf.empty()){ cerr << "[ "; for(auto z_vun=vz_ycf.begin(); z_vun!=(vz_ycf.end()-1); z_vun++){ _print(*z_vun); cerr <<", "; } _print(*(vz_ycf.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A, typename B> void _print(pair<A, B> v_ec){ cerr << "{ "; _print(v_ec.first); cerr << ", "; _print(v_ec.second); cerr << " }"; }
	template<typename A> void _print(set<A> h){ if(!h.empty()){ cerr << "{ "; for(auto pwf=h.begin(), tig_lt=next(pwf); tig_lt!=(h.end()); pwf++, tig_lt++){ _print(*pwf); cerr <<", "; } _print(*(h.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(map<A, B> sku){ if(!sku.empty()){ cerr << "[ "; for(auto p=sku.begin(), yvq_iyu=next(p); yvq_iyu!=(sku.end()); p++, yvq_iyu++){ _print(*p); cerr <<", "; } _print(*(sku.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(multiset<A> p){ if(!p.empty()){ cerr << "{ "; for(auto ir=p.begin(), uhs=next(ir); uhs!=(p.end()); ir++, uhs++){ _print(*ir); cerr <<", "; } _print(*(p.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(multimap<A, B> zqw){ if(!zqw.empty()){ cerr << "[ "; for(auto hkz_hr=zqw.begin(), gj=next(hkz_hr); gj!=(zqw.end()); hkz_hr++, gj++){ _print(*hkz_hr); cerr <<", "; } _print(*(zqw.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_set<A> hoy_bo){ if(!hoy_bo.empty()){ cerr << "{ "; auto el = hoy_bo.begin(); for(auto vqa_zlf=next(el); vqa_zlf!=(hoy_bo.end()); el++, vqa_zlf++){ _print(*el); cerr <<", "; } _print(*el); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_map<A, B> l){ if(!l.empty()){ cerr << "[ "; auto tlx_qav = l.begin(); for(auto l=next(tlx_qav); l!=(l.end()); tlx_qav++, l++){ _print(*tlx_qav); cerr <<", "; } _print(*tlx_qav); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_multiset<A> dwq_u){ if(!dwq_u.empty()){ cerr << "{ "; auto fi=dwq_u.begin(); for(auto jii_f=next(fi); jii_f!=(dwq_u.end()); fi++, jii_f++){ _print(*fi); cerr <<", "; } _print(*fi); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_multimap<A, B> ows_bks){ if(!ows_bks.empty()){ cerr << "[ "; auto x=ows_bks.begin(); for(auto bgm_v=next(x); bgm_v!=(ows_bks.end()); x++, bgm_v++){ _print(*x); cerr <<", "; } _print(*x); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(stack<A> sn){ if(!sn.empty()){ stack<A> d_mpo; cerr << "T[ "; while(sn.size() != 1){ _print(sn.top()); cerr << ", "; d_mpo.push(sn.top()); sn.pop(); } _print(sn.top()); cerr << " ]B"; d_mpo.push(sn.top()); sn.pop(); while(!d_mpo.empty()){ sn.push(d_mpo.top()); d_mpo.pop(); } } else{ cerr << "T[]B"; } }
	template<typename A> void _print(queue<A> n){ if(!n.empty()){ queue<A> z_z; cerr << "F[ "; while(n.size() != 1){ _print(n.front()); cerr << ", "; z_z.push(n.front()); n.pop(); } _print(n.front()); cerr << " ]B"; z_z.push(n.front()); n.pop(); while(!z_z.empty()){ n.push(z_z.front()); z_z.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A> wz){ if(!wz.empty()){ queue<A> gx_as; cerr << "T[ "; while(wz.size() != 1){ _print(wz.top()); cerr << ", "; gx_as.push(wz.top()); wz.pop(); } _print(wz.top()); cerr << " ]B"; gx_as.push(wz.top()); wz.pop(); while(!gx_as.empty()){ wz.push(gx_as.front()); gx_as.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> qma_p){ if(!qma_p.empty()){ queue<A> ku; cerr << "T[ "; while(qma_p.size() != 1){ _print(qma_p.top()); cerr << ", "; ku.push(qma_p.top()); qma_p.pop(); } _print(qma_p.top()); cerr << " ]B"; ku.push(qma_p.top()); qma_p.pop(); while(!ku.empty()){ qma_p.push(ku.front()); ku.pop(); } } else{ cerr << "F[]B"; } }
	 


	ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
	ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
	void eq(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} eq(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
	ll mminv(ll a, ll b) {ll arr[3]; eq(a, b, arr); return arr[0];} //for non prime b
	ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
	bool bso_h(ll a, ll b) {return a > b;}
	void lt_d(int &cd_ter, int &pl_ozd) {int j_ai = cd_ter; cd_ter = pl_ozd; pl_ozd = j_ai;}
	ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
	void ob(int tai_av) {cout << "Case #" << tai_av << ": ";}
	vector<ll> lo_a(int fr) {int*csy = new int[fr + 1](); vector<ll> od; for (int nos = 2; nos <= fr; nos++)if (csy[nos] == 0) {od.push_back(nos); for (int s = 2 * nos; s <= fr; s += nos)csy[s] = 1;} return od;}
	ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
	ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
	ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
	ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
	ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
	/*--------------------------------------------------------------------------------------------------------------------------*/


	ll expo1(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a) ; b = b >> 1;} return res;}

	vector<vector<ll>> qsx(402,vector<ll>(402));

	ll to0(ll i, ll j, ll l,ll r){
		return qsx[l][r] - qsx[i-1][r] -qsx[l][j-1]+qsx[i-1][j-1];
	}
	ll to1(ll i, ll j, ll l,ll r){
		return ((l-i+1)*(r-j+1)) - to0(i,j,l,r);
	}

	
	void qqn_wuf(){
		ll n,m;
		cin>>n>>m;

		//memset(pref,0,sizeof pref);

		//vector<string> s(n);
		vector<vector<ll>> no_xo(n+1,vector<ll>(m+1));

		for(int ce_ipp=0;ce_ipp<n;ce_ipp++){
			// string temp;
			// cin>>temp;

			for(int woy_m=0;woy_m<m;woy_m++){
				char p;
				cin>>p;
				
				no_xo[ce_ipp][woy_m]=p-'0';
				
			}
		}

		for(int t=1;t<=n;t++){
			
			for(int pib_yt=1;pib_yt<=m;pib_yt++){
				
				qsx[t][pib_yt]=qsx[t-1][pib_yt]+qsx[t][pib_yt-1]-qsx[t-1][pib_yt-1]+no_xo[t-1][pib_yt-1];
			}
		}
		//dbg(pref);
		ll ans = INF;

		for(int zb=1;zb<=m;zb++){
			for(int sgj_f=zb+3;sgj_f<=m;sgj_f++){
				ll prev = 1000000007;
				for(int nv=5;nv<=n;nv++){
					ll last_row = to1(nv,zb+1,nv,sgj_f-1);
					dbg(last_row);
					
					ll rect = to0(nv-3,zb+1,nv-1,sgj_f-1)+to1(nv-3,zb,nv-1,zb)+to1(nv-3,sgj_f,nv-1,sgj_f)+to1(nv-4,zb+1,nv-4,sgj_f-1);

                	
					//cout<<rect<<endl; 
					ll cur = min(rect+last_row,prev+last_row);
					ans=min(ans,cur);
					prev=cur -last_row+to0(nv,zb+1,nv,sgj_f-1)+to1(nv,zb,nv,zb)+to1(nv,sgj_f,nv,sgj_f);
				}
			}
		}

		cout<<ans<<endl;
	}


	int main()
	{
	    fastio();

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	    freopen("error.txt","w",stderr);
	#endif
	    

	    int bz_ms;
	    cin >> bz_ms;
	    //t = 1;
	    int zbl = 1;
	    while (bz_ms--) {
	        //cout << "Case #" << tc << ": "<<endl;
	        qqn_wuf();
	        zbl++;
	        //cout << endl;
	    }


	    return 0;
	}