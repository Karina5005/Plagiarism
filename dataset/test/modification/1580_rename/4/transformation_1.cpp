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
	 
	void cs(unsigned short ej){ cerr << ej; }
	void ini(short nfg_ou){ cerr << nfg_ou; }
	void i(unsigned int t){ cerr << t; }
	void zjp_j(int c){ cerr << c; }
	void k_ik(unsigned long v){ cerr << v; }
	void t(long pv_zn){ cerr << pv_zn; }
	void vty(unsigned long long l_d){ cerr << l_d; }
	void jbe(long long fyj){ cerr << fyj; }
	void twi(float p_nr){ cerr << p_nr; }
	void vdr_bo(double a_okh){ cerr << a_okh; }
	void a_zxf(long double ux){ cerr << ux; }
	void e(unsigned char j_bdu){ cerr << j_bdu; }
	void wrx(char yp){ cerr << yp; }
	void p(string x){ cerr << x; }
	 
	template<typename A> void _print(vector<A> f_d);
	template<typename A, typename B> void _print(pair<A, B> b);
	template<typename A> void _print(set<A> twk_zcu);
	template<typename A, typename B> void _print(map<A, B> wx);
	template<typename A> void _print(multiset<A> fgo_bjx);
	template<typename A, typename B> void _print(multimap<A, B> c_zas);
	template<typename A> void _print(unordered_set<A> hkm_x);
	template<typename A, typename B> void _print(unordered_map<A, B> spz_iq);
	template<typename A> void _print(unordered_multiset<A> sl_l);
	template<typename A, typename B> void _print(unordered_multimap<A, B> zww_qkg);
	template<typename A> void _print(stack<A> hwn_j);
	template<typename A> void _print(queue<A> wjv_auk);
	template<typename A> void _print(priority_queue<A> k_hhs);
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> mo);
	 
	template<typename A> void _print(vector<A> g_nv){ if(!g_nv.empty()){ cerr << "[ "; for(auto y_a=g_nv.begin(); y_a!=(g_nv.end()-1); y_a++){ _print(*y_a); cerr <<", "; } _print(*(g_nv.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A, typename B> void _print(pair<A, B> z_el){ cerr << "{ "; _print(z_el.first); cerr << ", "; _print(z_el.second); cerr << " }"; }
	template<typename A> void _print(set<A> q_r){ if(!q_r.empty()){ cerr << "{ "; for(auto n=q_r.begin(), aw=next(n); aw!=(q_r.end()); n++, aw++){ _print(*n); cerr <<", "; } _print(*(q_r.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(map<A, B> xsk){ if(!xsk.empty()){ cerr << "[ "; for(auto v_k=xsk.begin(), t_z=next(v_k); t_z!=(xsk.end()); v_k++, t_z++){ _print(*v_k); cerr <<", "; } _print(*(xsk.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(multiset<A> iw){ if(!iw.empty()){ cerr << "{ "; for(auto ciq=iw.begin(), bf=next(ciq); bf!=(iw.end()); ciq++, bf++){ _print(*ciq); cerr <<", "; } _print(*(iw.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(multimap<A, B> oav_dkl){ if(!oav_dkl.empty()){ cerr << "[ "; for(auto swx=oav_dkl.begin(), t=next(swx); t!=(oav_dkl.end()); swx++, t++){ _print(*swx); cerr <<", "; } _print(*(oav_dkl.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_set<A> g_f){ if(!g_f.empty()){ cerr << "{ "; auto t = g_f.begin(); for(auto kx=next(t); kx!=(g_f.end()); t++, kx++){ _print(*t); cerr <<", "; } _print(*t); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_map<A, B> aw){ if(!aw.empty()){ cerr << "[ "; auto ob_fok = aw.begin(); for(auto sb=next(ob_fok); sb!=(aw.end()); ob_fok++, sb++){ _print(*ob_fok); cerr <<", "; } _print(*ob_fok); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_multiset<A> gvu_sb){ if(!gvu_sb.empty()){ cerr << "{ "; auto elg_mm=gvu_sb.begin(); for(auto lnh=next(elg_mm); lnh!=(gvu_sb.end()); elg_mm++, lnh++){ _print(*elg_mm); cerr <<", "; } _print(*elg_mm); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_multimap<A, B> ak_pg){ if(!ak_pg.empty()){ cerr << "[ "; auto bro=ak_pg.begin(); for(auto er_ck=next(bro); er_ck!=(ak_pg.end()); bro++, er_ck++){ _print(*bro); cerr <<", "; } _print(*bro); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(stack<A> f_vfm){ if(!f_vfm.empty()){ stack<A> aug; cerr << "T[ "; while(f_vfm.size() != 1){ _print(f_vfm.top()); cerr << ", "; aug.push(f_vfm.top()); f_vfm.pop(); } _print(f_vfm.top()); cerr << " ]B"; aug.push(f_vfm.top()); f_vfm.pop(); while(!aug.empty()){ f_vfm.push(aug.top()); aug.pop(); } } else{ cerr << "T[]B"; } }
	template<typename A> void _print(queue<A> ky){ if(!ky.empty()){ queue<A> app; cerr << "F[ "; while(ky.size() != 1){ _print(ky.front()); cerr << ", "; app.push(ky.front()); ky.pop(); } _print(ky.front()); cerr << " ]B"; app.push(ky.front()); ky.pop(); while(!app.empty()){ ky.push(app.front()); app.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A> dnw){ if(!dnw.empty()){ queue<A> ir; cerr << "T[ "; while(dnw.size() != 1){ _print(dnw.top()); cerr << ", "; ir.push(dnw.top()); dnw.pop(); } _print(dnw.top()); cerr << " ]B"; ir.push(dnw.top()); dnw.pop(); while(!ir.empty()){ dnw.push(ir.front()); ir.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> on_q){ if(!on_q.empty()){ queue<A> gt; cerr << "T[ "; while(on_q.size() != 1){ _print(on_q.top()); cerr << ", "; gt.push(on_q.top()); on_q.pop(); } _print(on_q.top()); cerr << " ]B"; gt.push(on_q.top()); on_q.pop(); while(!gt.empty()){ on_q.push(gt.front()); gt.pop(); } } else{ cerr << "F[]B"; } }
	 


	ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
	ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
	void ph(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} ph(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
	ll mminv(ll a, ll b) {ll arr[3]; ph(a, b, arr); return arr[0];} //for non prime b
	ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
	bool g_mjg(ll a, ll b) {return a > b;}
	void ki_m(int &qrf, int &x) {int d = qrf; qrf = x; x = d;}
	ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
	void v_jjd(int csm) {cout << "Case #" << csm << ": ";}
	vector<ll> peb_olc(int gab) {int*gxb = new int[gab + 1](); vector<ll> azh; for (int bol_v = 2; bol_v <= gab; bol_v++)if (gxb[bol_v] == 0) {azh.push_back(bol_v); for (int o_h = 2 * bol_v; o_h <= gab; o_h += bol_v)gxb[o_h] = 1;} return azh;}
	ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
	ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
	ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
	ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
	ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
	/*--------------------------------------------------------------------------------------------------------------------------*/


	ll expo1(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a) ; b = b >> 1;} return res;}

	// vector<vector<ll>> pref(401,vector<ll>(401));
	const int ehz_mbu = 401;
	ll pref[ehz_mbu][ehz_mbu];
	
	ll to0(ll i, ll j, ll l,ll r){
		return pref[l][r] - pref[i-1][r] -pref[l][j-1]+pref[i-1][j-1];
	}
	ll to1(ll i, ll j, ll l,ll r){
		return ((l-i+1)*(r-j+1)) - to0(i,j,l,r);
	}

	



	void zo_dr(){
		ll n,m;
		cin>>n>>m;

		//memset(pref,0,sizeof pref);

		vector<string> pyz(n);
		vector<vector<ll>> sp(n+1,vector<ll>(m+1));

		for(int zk=0;zk<n;zk++){
			cin>>pyz[zk];
		}

		for(int p=1;p<=n;p++){
			for(int f_aas=1;f_aas<=m;f_aas++){
				if(pyz[p-1][f_aas-1]=='0'){
					sp[p][f_aas]=0;
				}else{
					sp[p][f_aas]=1;
				}
			}
		}

		for(int ja_cv=1;ja_cv<=n;ja_cv++){
			
			for(int br=1;br<=m;br++){
				
				pref[ja_cv][br]=pref[ja_cv-1][br]+pref[ja_cv][br-1]-pref[ja_cv-1][br-1]+sp[ja_cv][br];
			}
		}
		//dbg(pref);
		ll ans = INF;

		for(int xtq_x=1;xtq_x<=m;xtq_x++){
			for(int a_c=xtq_x+3;a_c<=m;a_c++){
				ll prev = 1e9;
				for(int d_ou=5;d_ou<=n;d_ou++){
					ll last_row = to1(d_ou,xtq_x+1,d_ou,a_c-1);
					// dbg(last_row);
					
					ll rect = to0(d_ou-3,xtq_x+1,d_ou-1,a_c-1);
					rect+=(to1(d_ou-3,xtq_x,d_ou-1,xtq_x)+to1(d_ou-3,a_c,d_ou-1,a_c) + to1(d_ou-4,xtq_x+1,d_ou-4,a_c-1));

					ll rect_5_cost = to0(d_ou-3, xtq_x+1, d_ou-1, a_c-1);
                	     rect_5_cost += to1(d_ou-4, xtq_x+1, d_ou-4, a_c-1);
                	     rect_5_cost += to1(d_ou-3, xtq_x, d_ou-1, xtq_x)+to1(d_ou-3, a_c, d_ou-1, a_c);

                	// dbg(rect);
                	// dbg(rect_5_cost);
					//cout<<rect<<endl; 
					ll cur = min(rect+last_row,prev+last_row);
					ans=min(ans,cur);
					prev = cur - last_row + to0(d_ou,xtq_x+1,d_ou,a_c-1) + to1(d_ou,xtq_x,d_ou,xtq_x) + to1(d_ou,a_c,d_ou,a_c);
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
	    

	    int ii_i;
	    cin >> ii_i;
	    //t = 1;
	    int u = 1;
	    while (ii_i--) {
	        //cout << "Case #" << tc << ": "<<endl;
	        zo_dr();
	        u++;
	        //cout << endl;
	    }


	    return 0;
	}