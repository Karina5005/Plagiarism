#include<bits/stdc++.h>
using namespace std;

#pragma region Debugger
void wj(int mbx) {cerr << mbx;}
void f_ioa(long nv_i) {cerr << nv_i;}
void d_o(long long ouz_h) {cerr << ouz_h;}
void v_v(unsigned av) {cerr << av;}
void z_btl(unsigned long vjx_bw) {cerr << vjx_bw;}
void o_but(unsigned long long auo_dy) {cerr << auo_dy;}
void g(float h) {cerr << h;}
void gaz_qdk(double fl) {cerr << fl;}
void pnu_al(long double xo) {cerr << xo;}
void nff(char t_tay) {cerr << '\'' << t_tay << '\'';}
void ilx(const char *ire_y) {cerr << '\"' << ire_y << '\"';}
void ai_q(const string &re_zim) {cerr << '\"' << re_zim << '\"';}
void o_wa(bool hm) {cerr << (hm ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &pte) {cerr << '{'; __print(pte.first); cerr << ','; __print(pte.second); cerr << '}';}
template<typename T>
void __print(const T &iu) {int s_bv = 0; cerr << '{'; for (auto &g: iu) cerr << (s_bv++ ? "," : ""), __print(g); cerr << "}";}
void lyf() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T f_eru, V... i_bkq) {__print(f_eru); if (sizeof...(v)) cerr << ", "; _print(i_bkq...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#pragma endregion Debugger

#define pb push_back
#define MP make_pair
#define F first
#define S second
#define int long long int
#define endl "\n"

const int v_o = 1e9+7; 

int ceil_(int n, int k){
	return (n+k-1)/k;
}

int be(int a, int b){
	int ans = 1;
	a%=v_o;
	while(b){
		if(b%2 == 1){
			ans = (ans*a)%v_o;
		}
		a = (a*a)%v_o;
		b/=2;
	}
	return ans;
}

int mod_mult(int a, int b){
	a = (a%v_o); b = (b%v_o);
	return (((a*b)%v_o)+v_o)%v_o;
}

int mod_plus(int a, int b){
	a = (a%v_o); b = (b%v_o);
	return (((a+b)%v_o)+v_o)%v_o;
}

int mod_minus(int a, int b){
	a = (a%v_o); b = (b%v_o);
	return (((a-b+v_o)%v_o)+v_o)%v_o;
}

int inv(int x){
	return be(x,v_o-2);
}

int gcd_(int a, int b){
	if(b==0) return a;
	return gcd_(b,a%b);
}

int lcm_(int a, int b){
	return (a*b)/gcd_(a,b);
}

void o(vector<int> &rjr, int l, int mid, int r, int &ic){
	vector<int> z, s_udi;
	for(int i=l;i<=mid;i++) z.pb(rjr[i]);
	for(int i=mid+1;i<=r;i++) s_udi.pb(rjr[i]);

	int i=0; int j=0;
	int n1 = z.size(); int n2 = s_udi.size();

	int k=l;
	while(i<n1 && j<n2){
		if(z[i]<=s_udi[j]){
			rjr[k++] = (z[i++]);
		}
		else{
			rjr[k++] = (s_udi[j++]);
			ic+=(n1-i);
		}
	}
	while(i<n1){
		rjr[k++] = (z[i++]);
	}
	while(j<n2){
		rjr[k++] = (s_udi[j++]);
	}
}

void tdx_v(vector<int> &pi_d, int l, int r, int &ic){
	if(l>=r) return;
	int mid = (l+r)/2;
	tdx_v(pi_d, l, mid, ic);
	tdx_v(pi_d, mid+1, r, ic);

	o(pi_d, l, mid, r, ic);
}

int find_inversion_count(vector<int> &mav_iz){
	int n = mav_iz.size();
	int ic=0;
	tdx_v(mav_iz, 0, n-1, ic);
	return ic;
}

vector<pair<int,int> > z(int x){
	vector<pair<int,int> > lo_ym;
	for(int i=2;i*i<=x;i++){
		int cnt=0;
		while(x%i == 0){
			cnt++;
			x/=i;
		}
		if(cnt>0) lo_ym.pb(MP(i,cnt));
	}
	if(x>1) lo_ym.pb(MP(x,1));
	return lo_ym;
}

struct union_find{
    int n, set_size, *parent, *rank; //set_size is the number of components
    union_find(int a){
        n = a;
        set_size = a;
        parent = new int[n+1];
        rank = new int[n+1];
        for(int i=1;i<=n;i++){
            parent[i]=i;
            rank[i]=1;
        }
    }

    int find(int x){
        if(x==parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void j(int x, int y){
        int xroot = find(x);
        int yroot = find(y);
        if(xroot != yroot){
            if(rank[xroot] <= rank[yroot]){
                rank[yroot]+=rank[xroot];
                parent[xroot]=yroot;
            }
            else{
                rank[xroot]+=rank[yroot];
                parent[yroot]=xroot;
            }
            set_size--;
        }
        // if already x and y are in the same component, no need to do anything
    }

    void hc_q(){
        set_size = n;
        for(int i=1;i<=n;i++){
            rank[i]=1;
            parent[i]=i;
        }
    }

    int get_size(){
        return set_size;
    }

    void rul_bd(){
        for(int i=1;i<=n;i++){
            cout<<i<<": "<<parent[i]<<" , ";
        }cout<<endl;
    }
};  

void be_b(vector<int> &zo){
	for(int i=0;i<zo.size();i++) cout<<zo[i]<<" ";
	cout<<endl;
}

void mr(vector<vector<int> > &zfl){
	for(int i=0;i<zfl.size();i++){
		for(int j=0;j<zfl[i].size();j++){
			cout<<zfl[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
}

typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

void sx(){
	int n; cin>>n;
	vi c(n+1);
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		sum+=c[i];
	}
		
	// option 1: 1,a2,1,a4,....
	int sum1=0;
	for(int i=1;i<=n;i+=2){
		sum1+=(c[i]-1);
	}
	sum1*=2;
	if(sum1<=sum){
		for(int i=1;i<=n;i++){
			if(i%2 == 1) cout<<"1 ";
			else cout<<c[i]<<" ";
		}cout<<endl;
		return;
	}

	// option 2: a1,1,a3,1,....
	int sum2=0;
	for(int i=2;i<=n;i+=2){
		sum2+=(c[i]-1);
	}
	sum2*=2;
	if(sum2<=sum){
		for(int i=1;i<=n;i++){
			if(i%2 == 0) cout<<"1 ";
			else cout<<c[i]<<" ";
		}cout<<endl;
		return;
	}
	
	cout<<"WTF"<<endl;
}	

signed main(){
	ios::sync_with_stdio(false); cin.tie(0);

	int t; cin>>t;
	while(t--){
		sx();
	}
}