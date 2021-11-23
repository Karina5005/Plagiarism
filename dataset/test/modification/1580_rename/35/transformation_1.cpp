#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n)     for(int i=a;i<n;i++)
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define endl           "\n"
#define x              first
#define y              second
#define gcd(a,b)       __gcd(a,b)
#define mem1(a)        memset(a,-1,sizeof(a))
#define mem0(a)        memset(a,0,sizeof(a))
#define sz(a)          (int)a.size()
#define pii            pair<int,int>
#define hell           1000000007
#define elasped_time   1.0 * clock() / CLOCKS_PER_SEC



template<typename T1,typename T2>istream& operator>>(istream& v,pair<T1,T2> &lt_h){v>>lt_h.x>>lt_h.y;return v;}
template<typename T1,typename T2>ostream& operator<<(ostream& ay,pair<T1,T2> jhh_lc){ay<<jhh_lc.x<<" "<<jhh_lc.y;return ay;}
template<typename T,typename T1>T maxs(T &h,T1 oqs_o){if(oqs_o>h)h=oqs_o;return h;}
template<typename T,typename T1>T mins(T &ne_b,T1 bnu_lss){if(bnu_lss<ne_b)ne_b=bnu_lss;return ne_b;}

const int c = 450;



int ja(){
 		int m,p; cin >> m >> p;

 		vector<pii> dp_og(m + 1);
 		for(int t = 1; t <= m; t++){
 			cin >> dp_og[t];
 		}

 		vector<int> sg_r(p + 2);

 		vector<vector<pii>> c_fx(m + 1);
 		vector<int> im(m + 1,-1);

 		vector<vector<int>> zxx_vb(c,vector<int>(c));
 		int dmd_vs = 0;
 		for(int jv_crx = 1; jv_crx <= p; jv_crx++){
 			int rqw,so_v; cin >> rqw >> so_v;
 			ll x = dp_og[so_v].x,y = dp_og[so_v].y;
 			ll sum = x + y;
 			if(rqw == 1){	
				if(sum >= c){
					ll l = jv_crx + x;
					ll r = l + y;
					im[so_v] = jv_crx;
					while(l <= p){
						sg_r[l]++;
						if(r <= p)sg_r[r]--;
						l += sum;
						r += sum;
					}
				}else{
					ll s = jv_crx + x;
					while(y--){
						zxx_vb[sum][s%sum]++;
						s++;
					}
					im[so_v] = jv_crx;
				}
 			}else{
 				if(sum >= c){
 					ll l = im[so_v] + x;
 					ll r = l + y;
 					while(l <= p){
						if(jv_crx >= l and jv_crx < r)sg_r[jv_crx]--;
 						if(l > jv_crx)sg_r[l]--;
 						if(r > jv_crx and r <= p)sg_r[r]++;
 						l += sum;
 						r += sum;
					}
 					
 				}else{
 					ll s = im[so_v] + x;
 					while(y--){
						zxx_vb[sum][s%sum]--;
						s++;
					}
 				}
 			}
 			dmd_vs += sg_r[jv_crx];
 			int c = 0;
 			for(int r = 1; r < c; r++){
 				c += zxx_vb[r][jv_crx%r];
 			}
 			cout << dmd_vs + c << endl;
 		}

 return 0;
}
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #ifdef SIEVE
    sieve();
    #endif
    #ifdef NCR
    init();
    #endif
    int p_l=1;//cin>>t;
    while(p_l--){
        ja();
    }
    return 0;
}
 