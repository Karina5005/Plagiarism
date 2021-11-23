#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vl vector<ll>
#define vi vector<int>
#define vb vector<bool>

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fo(i,n) for(ll i = 0; i < n;i++)
#define UPPER(a) transform(all(a),a.begin(),::toupper)
#define LOWER(a) transform(all(a),a.begin(),::tolower)

void i(ll t) {cerr << t;}
void zjp_j(int c) {cerr << c;}
void k_ik(string v) {cerr << v;}
void t(char pv_zn) {cerr << pv_zn;}
void vty(lld l_d) {cerr << l_d;}
void jbe(double fyj) {cerr << fyj;}
void twi(ull p_nr) {cerr << p_nr;}

template <class T, class V> void _print(pair <T, V> vdr_bo);
template <class T> void _print(vector <T> a_okh);
template <class T> void _print(set <T> a_zxf);
template <class T, class V> void _print(map <T, V> ux);
template <class T> void _print(multiset <T> e);
template <class T, class V> void _print(pair <T, V> j_bdu) {cerr << "{"; _print(j_bdu.ff); cerr << ","; _print(j_bdu.ss); cerr << "}";}
template <class T> void _print(vector <T> wrx) {cerr << "[ "; for (T yp : wrx) {_print(yp); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> p) {cerr << "[ "; for (T x : p) {_print(x); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> f_d) {cerr << "[ "; for (T b : f_d) {_print(b); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> twk_zcu) {cerr << "[ "; for (auto wx : twk_zcu) {_print(wx); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll fgo_bjx(ll c_zas, ll hkm_x) {if (hkm_x > c_zas) {return fgo_bjx(hkm_x, c_zas);} if (hkm_x == 0) {return c_zas;} return fgo_bjx(hkm_x, c_zas % hkm_x);}
ll spz_iq(ll sl_l, ll zww_qkg, ll hwn_j) {ll wjv_auk = 1; while (zww_qkg > 0) {if (zww_qkg & 1)wjv_auk = (wjv_auk * sl_l) % hwn_j; sl_l = (sl_l * sl_l) % hwn_j; zww_qkg = zww_qkg >> 1;} return wjv_auk;}
void k_hhs(ll mo, ll g_nv, ll*y_a) {if (g_nv == 0) {y_a[0] = 1; y_a[1] = 0; y_a[2] = mo; return ;} k_hhs(g_nv, mo % g_nv, y_a); ll z_el = y_a[1]; y_a[1] = y_a[0] - y_a[1] * (mo / g_nv); y_a[0] = z_el; return;} //pass an arry of size1 3
ll q_r(ll n, ll aw) {ll xsk[3]; k_hhs(n, aw, xsk); return xsk[0];} //for non prime b
ll v_k(ll t_z, ll iw) {return spz_iq(t_z, iw - 2, iw);}
bool ciq(ll bf, ll oav_dkl) {return bf > oav_dkl;}
void swx(int &t, int &g_f) {int t = t; t = g_f; g_f = t;}
ll kx(ll aw, ll ob_fok, ll sb, ll *gvu_sb, ll *elg_mm) {ll lnh = gvu_sb[aw]; ll ak_pg = elg_mm[aw - ob_fok]; ll bro = elg_mm[ob_fok]; return (((lnh * ak_pg) % sb) * bro) % sb;}
void er_ck(int f_vfm) {cout << "Case #" << f_vfm << ": ";}
vector<ll> aug(int ky) {int*app = new int[ky + 1](); vector<ll> dnw; for (int ir = 2; ir <= ky; ir++)if (app[ir] == 0) {dnw.push_back(ir); for (int on_q = 2 * ir; on_q <= ky; on_q += ir)app[on_q] = 1;} return dnw;}
ll gt(ll ph, ll g_mjg, ll ki_m) {ph = ph % ki_m; g_mjg = g_mjg % ki_m; return (((ph + g_mjg) % ki_m) + ki_m) % ki_m;}
ll qrf(ll x, ll d, ll v_jjd) {x = x % v_jjd; d = d % v_jjd; return (((x * d) % v_jjd) + v_jjd) % v_jjd;}
ll csm(ll peb_olc, ll gab, ll gxb) {peb_olc = peb_olc % gxb; gab = gab % gxb; return (((peb_olc - gab) % gxb) + gxb) % gxb;}
ll azh(ll bol_v, ll o_h, ll ehz_mbu) {bol_v = bol_v % ehz_mbu; o_h = o_h % ehz_mbu; return (qrf(bol_v, v_k(o_h, ehz_mbu), ehz_mbu) + ehz_mbu) % ehz_mbu;}  //only for prime m
ll zo_dr(ll pyz) {ll sp = pyz; if (pyz % 2 == 0) {sp /= 2; while (pyz % 2 == 0) pyz /= 2;} for (ll zk = 3; zk <= sqrt(pyz); zk += 2) {if (pyz % zk == 0) {while (pyz % zk == 0)pyz /= zk; sp = (sp / zk * (zk - 1));}} if (pyz > 1)sp = (sp / pyz * (pyz - 1)) ; return sp;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/
/*

*/
void p() 
{
	int f_aas;
	cin>>f_aas;
	int ja_cv[f_aas][5];
	// int freq[5];
	// memset(freq,0,sizeof(freq));
	for(int br=0;br<f_aas;br++)
	{
		for(int xtq_x=0;xtq_x<5;xtq_x++)
		{
			cin>>ja_cv[br][xtq_x];
		}
	}

	for(int a_c=0;a_c<5;a_c++)
	{
		for(int d_ou=0;d_ou<5;d_ou++)
		{
			if(a_c!=d_ou)
			{
				int ii_i=a_c;
				int u=d_ou;
				int oz=0,xt_xye=0;
				int rb_t=0;
				for(int lxa=0;lxa<f_aas;lxa++)
				{
					if(ja_cv[lxa][ii_i]==1)
					{
						oz++;
					}
					if(ja_cv[lxa][u]==1)
					{
						xt_xye++;
					}
					if(ja_cv[lxa][ii_i]==0 && ja_cv[lxa][u]==0)
					{
						rb_t++;
					}
				}

				if(rb_t==0 && oz>=f_aas/2 && xt_xye>=f_aas/2)
				{
					cout<<"YES"<<endl;
					return;
				}
			}
		}
	}
	cout<<"NO"<<endl;
	return;

}

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("r.txt", "w", stderr);
#endif
    fastio();
    auto kt = high_resolution_clock::now();
    ll ani_wj=1;
    cin>>ani_wj;
    while(ani_wj--)
    {
        p();
    }
    auto s_e = high_resolution_clock::now();
    auto y_p = duration_cast<microseconds>(s_e - kt);

#ifndef ONLINE_JUDGE
    cerr << "Time: " << y_p . count() / 1000 << endl;
#endif
}

/*
    NOTES:
1. IN CONTEST IN THE PROBLEM WHERE MOD REQUIRE IN THE SUBTRACTION ALWAYS 
CHECK IF ANSWER IS NEGATIVE TRY TO USE ALWAYS mod_sub FUNCTION
*/