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
	 
	void qm_v(unsigned short q){ cerr << q; }
	void qw_zcr(short b_a){ cerr << b_a; }
	void u_wv(unsigned int kz_x){ cerr << kz_x; }
	void ue_hpk(int nq_f){ cerr << nq_f; }
	void tqb_y(unsigned long v_xx){ cerr << v_xx; }
	void x_gs(long dj_t){ cerr << dj_t; }
	void e_vx(unsigned long long e_vj){ cerr << e_vj; }
	void t_w(long long kwy_x){ cerr << kwy_x; }
	void mwm(float w_lb){ cerr << w_lb; }
	void a(double uw){ cerr << uw; }
	void jj_h(long double nqz_x){ cerr << nqz_x; }
	void cim_j(unsigned char fbj_zwm){ cerr << fbj_zwm; }
	void j_j(char hp){ cerr << hp; }
	void a(string by_sb){ cerr << by_sb; }
	 
	template<typename A> void _print(vector<A> lrq_n);
	template<typename A, typename B> void _print(pair<A, B> mtu);
	template<typename A> void _print(set<A> f);
	template<typename A, typename B> void _print(map<A, B> nbl_xrr);
	template<typename A> void _print(multiset<A> r);
	template<typename A, typename B> void _print(multimap<A, B> ejm_ju);
	template<typename A> void _print(unordered_set<A> r);
	template<typename A, typename B> void _print(unordered_map<A, B> ue);
	template<typename A> void _print(unordered_multiset<A> b_r);
	template<typename A, typename B> void _print(unordered_multimap<A, B> eqy);
	template<typename A> void _print(stack<A> gp);
	template<typename A> void _print(queue<A> tfc_al);
	template<typename A> void _print(priority_queue<A> xc_iyb);
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> cj_gqd);
	 
	template<typename A> void _print(vector<A> fm){ if(!fm.empty()){ cerr << "[ "; for(auto jm_ol=fm.begin(); jm_ol!=(fm.end()-1); jm_ol++){ _print(*jm_ol); cerr <<", "; } _print(*(fm.end()-1)); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A, typename B> void _print(pair<A, B> m_ajv){ cerr << "{ "; _print(m_ajv.first); cerr << ", "; _print(m_ajv.second); cerr << " }"; }
	template<typename A> void _print(set<A> pp){ if(!pp.empty()){ cerr << "{ "; for(auto lh=pp.begin(), s=next(lh); s!=(pp.end()); lh++, s++){ _print(*lh); cerr <<", "; } _print(*(pp.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(map<A, B> g){ if(!g.empty()){ cerr << "[ "; for(auto fr=g.begin(), rp_eme=next(fr); rp_eme!=(g.end()); fr++, rp_eme++){ _print(*fr); cerr <<", "; } _print(*(g.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(multiset<A> kkh_gbu){ if(!kkh_gbu.empty()){ cerr << "{ "; for(auto r=kkh_gbu.begin(), vq_rj=next(r); vq_rj!=(kkh_gbu.end()); r++, vq_rj++){ _print(*r); cerr <<", "; } _print(*(kkh_gbu.rbegin())); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(multimap<A, B> ulz){ if(!ulz.empty()){ cerr << "[ "; for(auto b_sxh=ulz.begin(), r=next(b_sxh); r!=(ulz.end()); b_sxh++, r++){ _print(*b_sxh); cerr <<", "; } _print(*(ulz.rbegin())); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_set<A> in){ if(!in.empty()){ cerr << "{ "; auto kkc_zk = in.begin(); for(auto sez=next(kkc_zk); sez!=(in.end()); kkc_zk++, sez++){ _print(*kkc_zk); cerr <<", "; } _print(*kkc_zk); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_map<A, B> i_d){ if(!i_d.empty()){ cerr << "[ "; auto eo = i_d.begin(); for(auto k_blk=next(eo); k_blk!=(i_d.end()); eo++, k_blk++){ _print(*eo); cerr <<", "; } _print(*eo); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(unordered_multiset<A> h_sd){ if(!h_sd.empty()){ cerr << "{ "; auto kzf_ecy=h_sd.begin(); for(auto k_y=next(kzf_ecy); k_y!=(h_sd.end()); kzf_ecy++, k_y++){ _print(*kzf_ecy); cerr <<", "; } _print(*kzf_ecy); cerr << " }"; } else{ cerr << "{}"; } }
	template<typename A, typename B> void _print(unordered_multimap<A, B> c_axi){ if(!c_axi.empty()){ cerr << "[ "; auto rzc_fhx=c_axi.begin(); for(auto tl_gm=next(rzc_fhx); tl_gm!=(c_axi.end()); rzc_fhx++, tl_gm++){ _print(*rzc_fhx); cerr <<", "; } _print(*rzc_fhx); cerr << " ]"; } else{ cerr << "[]"; } }
	template<typename A> void _print(stack<A> sm_oms){ if(!sm_oms.empty()){ stack<A> da_a; cerr << "T[ "; while(sm_oms.size() != 1){ _print(sm_oms.top()); cerr << ", "; da_a.push(sm_oms.top()); sm_oms.pop(); } _print(sm_oms.top()); cerr << " ]B"; da_a.push(sm_oms.top()); sm_oms.pop(); while(!da_a.empty()){ sm_oms.push(da_a.top()); da_a.pop(); } } else{ cerr << "T[]B"; } }
	template<typename A> void _print(queue<A> o_wdz){ if(!o_wdz.empty()){ queue<A> lvw; cerr << "F[ "; while(o_wdz.size() != 1){ _print(o_wdz.front()); cerr << ", "; lvw.push(o_wdz.front()); o_wdz.pop(); } _print(o_wdz.front()); cerr << " ]B"; lvw.push(o_wdz.front()); o_wdz.pop(); while(!lvw.empty()){ o_wdz.push(lvw.front()); lvw.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A> euv){ if(!euv.empty()){ queue<A> ed_ta; cerr << "T[ "; while(euv.size() != 1){ _print(euv.top()); cerr << ", "; ed_ta.push(euv.top()); euv.pop(); } _print(euv.top()); cerr << " ]B"; ed_ta.push(euv.top()); euv.pop(); while(!ed_ta.empty()){ euv.push(ed_ta.front()); ed_ta.pop(); } } else{ cerr << "F[]B"; } }
	template<typename A> void _print(priority_queue<A, vector<A>, greater<A>> ifq_go){ if(!ifq_go.empty()){ queue<A> bxo_ca; cerr << "T[ "; while(ifq_go.size() != 1){ _print(ifq_go.top()); cerr << ", "; bxo_ca.push(ifq_go.top()); ifq_go.pop(); } _print(ifq_go.top()); cerr << " ]B"; bxo_ca.push(ifq_go.top()); ifq_go.pop(); while(!bxo_ca.empty()){ ifq_go.push(bxo_ca.front()); bxo_ca.pop(); } } else{ cerr << "F[]B"; } }
	 


	ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
	ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
	void mtp(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} mtp(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
	ll mminv(ll a, ll b) {ll arr[3]; mtp(a, b, arr); return arr[0];} //for non prime b
	ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
	bool ub_dij(ll a, ll b) {return a > b;}
	void xtu_vw(int &s_q, int &kha) {int sf = s_q; s_q = kha; kha = sf;}
	ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
	void wc_tl(int w) {cout << "Case #" << w << ": ";}
	vector<ll> p(int pna) {int*sv = new int[pna + 1](); vector<ll> iuz; for (int y_nr = 2; y_nr <= pna; y_nr++)if (sv[y_nr] == 0) {iuz.push_back(y_nr); for (int w_xl = 2 * y_nr; w_xl <= pna; w_xl += y_nr)sv[w_xl] = 1;} return iuz;}
	ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
	ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
	ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
	ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
	ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
	/*--------------------------------------------------------------------------------------------------------------------------*/


	ll expo1(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a) ; b = b >> 1;} return res;}

	// vector<vector<ll>> pref(401,vector<ll>(401));
	const int xb = 401;
	ll pref[xb][xb];
	
	inline ll nh_kvz(ll i, ll j, ll l,ll r){
		return pref[l][r] - pref[i-1][r] -pref[l][j-1]+pref[i-1][j-1];
	}
	inline ll c_q(ll i, ll j, ll l,ll r){
		return ((l-i+1)*(r-j+1)) - nh_kvz(i,j,l,r);
	}

	



	void p_pfu(){
		ll n,m;
		cin>>n>>m;

		//memset(pref,0,sizeof pref);

		vector<string> ey_y(n);
		vector<vector<ll>> e(n+1,vector<ll>(m+1));

		for(int r=0;r<n;r++){
			cin>>ey_y[r];
		}

		for(int nk=1;nk<=n;nk++){
			for(int n=1;n<=m;n++){
				if(ey_y[nk-1][n-1]=='0'){
					e[nk][n]=0;
				}else{
					e[nk][n]=1;
				}
			}
		}

		for(int bc=1;bc<=n;bc++){
			
			for(int gu=1;gu<=m;gu++){
				
				pref[bc][gu]=pref[bc-1][gu]+pref[bc][gu-1]-pref[bc-1][gu-1]+e[bc][gu];
			}
		}
		//dbg(pref);
		ll ans = INF;

		for(int xn_o=1;xn_o<=m;xn_o++){
			for(int t=xn_o+3;t<=m;t++){
				ll prev = 1e9;
				for(int uxg=5;uxg<=n;uxg++){
					ll last_row = c_q(uxg,xn_o+1,uxg,t-1);
					// dbg(last_row);
					
					ll rect = nh_kvz(uxg-3,xn_o+1,uxg-1,t-1);
					rect+=(c_q(uxg-3,xn_o,uxg-1,xn_o)+c_q(uxg-3,t,uxg-1,t) + c_q(uxg-4,xn_o+1,uxg-4,t-1));

					ll rect_5_cost = nh_kvz(uxg-3, xn_o+1, uxg-1, t-1);
                	     rect_5_cost += c_q(uxg-4, xn_o+1, uxg-4, t-1);
                	     rect_5_cost += c_q(uxg-3, xn_o, uxg-1, xn_o)+c_q(uxg-3, t, uxg-1, t);

                	// dbg(rect);
                	// dbg(rect_5_cost);
					//cout<<rect<<endl; 
					ll cur = min(rect+last_row,prev+last_row);
					ans=min(ans,cur);
					prev = cur - last_row + nh_kvz(uxg,xn_o+1,uxg,t-1) + c_q(uxg,xn_o,uxg,xn_o) + c_q(uxg,t,uxg,t);
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
	    

	    int wzl;
	    cin >> wzl;
	    //t = 1;
	    int lqt = 1;
	    while (wzl--) {
	        //cout << "Case #" << tc << ": "<<endl;
	        p_pfu();
	        lqt++;
	        //cout << endl;
	    }


	    return 0;
	}