# include <bits/stdc++.h>
# define sz(x) (int)((x).size())
# define f first 
# define s second
# define pb push_back
# define all(x) x.begin(), x.end()
# define rep(i, n) for (int i = 0; i < n; ++i)
# define pqueue priority_queue
 
using namespace std;
 
mt19937 x(chrono::steady_clock::now().time_since_epoch().count());
 
void xf_n() { cerr << "\n";}
template<typename Head, typename... Tail>
void debug(Head a_h, Tail... oj) {cerr << a_h << " "; debug(oj...); }
 
template<class T> void umin(T &vj,T ax_u) { vj = min(vj, ax_u);}
template<class T> void umax(T &gh,T b) { gh = max(gh, b);}
 
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
const int j_qer = 1e9 + 7, ym = 1e6 + 5;

void c_tz() {
  int a_i;
        cin>>a_i;
        vector<ll> e(a_i);
        vector<pair<ll,ll> > n;
        for(int v=0;v<a_i;v++)
        {
            cin>>e[v];
            n.push_back({e[v],v+1});
        }
        sort(n.begin(),n.end());
        ll tzt = 200000;
        ll kl = 0, gm = a_i-1;
        ll mo = 0;
        while(kl<gm){
            while(gm>kl && n[kl].first*n[gm].first>tzt)
                gm--;
            for(int wk_s = gm; wk_s>kl;wk_s--)
                if(n[kl].first*n[wk_s].first==(n[kl].second+n[wk_s].second))
                    mo++;
            kl++;
        }
        cout<<mo<<endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int we_vwd; cin >> we_vwd; while (we_vwd--)
  c_tz();
}