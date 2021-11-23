# include <bits/stdc++.h>
# define sz(x) (int)((x).size())
# define f first 
# define s second
# define pb push_back
# define all(x) x.begin(), x.end()
# define rep(i, n) for (int i = 0; i < n; ++i)
# define pqueue priority_queue
 
using namespace std;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void debug() { cerr << "\n";}
template<typename Head, typename... Tail>
void debug(Head a, Tail... b) {cerr << a << " "; debug(b...); }
 
template<class T> void umin(T &a,T b) { a = min(a, b);}
template<class T> void umax(T &a,T b) { a = max(a, b);}
 
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
const int mod = 1e9 + 7, N = 1e6 + 5;

void solve() {
  int n;
        cin>>n;
        vector<ll> arr(n);
        vector<pair<ll,ll> > v;
        {
        int i=0;
        while (i<n) {
            cin>>arr[i];
            v.push_back({arr[i],i+1});
        	i++; 
        
        }}
        sort(v.begin(),v.end());
        ll mark = 200000;
        ll l = 0, r = n-1;
        ll ans = 0;
        while(l<r){
            while(r>l && v[l].first*v[r].first>mark)
                r--;
            {
            int i = r;
            while (i>l) {
                if(v[l].first*v[i].first==(v[l].second+v[i].second))
                    ans++;
                    i--; 
                    
                    }}
            l++;
        }
        cout<<ans<<endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t; while (t--)
  solve();
}