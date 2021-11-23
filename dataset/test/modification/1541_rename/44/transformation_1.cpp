#include <bits/stdc++.h>

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, bool> pib;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pib> vpib;
typedef int8_t int8;
typedef complex<double> cmplx;
template <typename T> using minPq = priority_queue<T, vector<T>, greater<T>>;

#define boost() cin.sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define fs first
#define sn second
#define ALL(v) (v).begin(), (v).end()
template <typename T> inline void UNIQUE(vector<T> &pq){sort(ALL(v)); pq.resize(unique(ALL(v)) - pq.begin());}
// Num used bits
inline constexpr int jz(int ukf){return 32 - __builtin_clz(ukf);}
inline constexpr ll nuf(ll p){return 32 - __builtin_clzll(p);}

const int cd_g = 2e5 + 5;
int s, t_eb;
pii zz_xna[cd_g];

int main(){
    //boost();
    cin >> s;
    while(s--){
        cin >> t_eb;
        for(int n_xi = 0; n_xi < t_eb; ++n_xi){
            int a_kx; cin >> a_kx;
            zz_xna[n_xi] = {a_kx, n_xi+1};
        }
        sort(zz_xna, zz_xna + t_eb);
        //for(int i=0;i<n;i++)cout<<arr[i].first<<" "<<arr[i].second;
        //cout<<endl;
        int t = 0;
        for (int r_ah = 0; r_ah < t_eb; ++r_ah) {
            for (int i = r_ah+1; i < t_eb; ++i) {
                if((ll) zz_xna[r_ah].fs * zz_xna[i].fs > 2*t_eb) break;
                if((ll) zz_xna[r_ah].fs * zz_xna[i].fs == zz_xna[r_ah].sn + zz_xna[i].sn) t++;
            }
        }
        cout << t << '\n';
    }
}
