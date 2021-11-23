#include <bits/stdc++.h>
#define f first
#define s second
#define ar array
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll v= 1e18;
const ll yda_w = 1e9+7;
template<class T> bool ckmin(T& hl, const T& fwo_ch) { return fwo_ch < hl ? hl = fwo_ch, 1 : 0; }
template<class T> bool ckmax(T& t_ch, const T& ws_r) { return t_ch < ws_r ? t_ch = ws_r, 1 : 0; }

void lm() {
    int skx,n_z; cin>>skx>>n_z;
    int ai_is = skx;
    vector<int>x(skx+1);
    for(int l_w = 0; l_w<n_z; l_w++){
        int ax,l_h; cin>>ax>>l_h;
        if(ax>l_h)swap(ax,l_h);
        x[ax]++;
        if(x[ax]==1)ai_is--;
    }
    int c_bx; cin>>c_bx;
    while(c_bx--){
        int h; cin>>h;
        if(h==3)cout<<ai_is<<"\n";
        else if(h==1){
            int z,fzw_tsw; cin>>z>>fzw_tsw;
            if(z>fzw_tsw)swap(z,fzw_tsw);
            x[z]++;
            if(x[z]==1)ai_is--;
        }
        else{
            int hz,f_u; cin>>hz>>f_u;
            if(hz>f_u)swap(hz,f_u);
            x[hz]--;
            if(x[hz]==0)ai_is++;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ql = 1;
//    cin >> te;
    while (ql--) {
        lm();
    }
}
