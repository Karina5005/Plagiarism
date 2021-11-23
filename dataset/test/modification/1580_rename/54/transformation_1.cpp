#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <cmath>
#include <climits>
#include <cassert>

using namespace std;
#define vec vector
#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>
ll n, m;
struct node_t{
    int cap;
    node_t* left = nullptr;
    node_t* right = nullptr;
    ll pval;
    vec<ll> val;
    ll eval(int hae_zp){
        if(val.empty()) val.resize(n+1, LLONG_MIN+1);
        if(val[hae_zp]!=LLONG_MIN+1) return val[hae_zp];
        if(hae_zp > cap) return LLONG_MIN;
        if(hae_zp==0) return 0;
        ll mx = LLONG_MIN;
        // evaluate cur
        mx = eval_core(hae_zp-1);
        mx += (m-1)*pval;
        mx -= 2*(hae_zp-1)*pval;
        // eval non-cur
        if(hae_zp != cap){
            mx = max(eval_core(hae_zp), mx);
        }

        val[hae_zp] = mx;
        return mx;
    }

    [[nodiscard]] ll eval_core(int ebx_ird) const{
        ll mx = LLONG_MIN;
        int ii_gt = right== nullptr?0:right->cap;
        int cnq = left== nullptr?0:left->cap;
        int sv = max(0,ebx_ird-ii_gt);
        int t_cw = min(ebx_ird, cnq);
        for(int dxr_oe = sv;dxr_oe<=t_cw;dxr_oe++){
            ll v = 0;
            if(dxr_oe != 0){
                v += left->eval(dxr_oe);
            }
            if(dxr_oe!=ebx_ird){
                v += right->eval(ebx_ird-dxr_oe);
            }
            v -= 2*dxr_oe*(ebx_ird-dxr_oe)*pval;
            mx = max(mx, v);
        }
        return mx;
    }
};

class SegTree{
public:
    explicit SegTree(int mfw_f):n(mfw_f){
        nd.resize(2<<(int)ceil(log2(mfw_f)));
    }
    void hcn_vab(int v, int rnt_m){
        wm_hhj(v, rnt_m, 0, n-1, 0);
    }

    pi Query(int j_jn, int cz){
        return QueryInternal(j_jn, cz, 0, n-1, 0);
    }
private:
    int n;
    // val, idx
    vec<pi> nd;

    void wm_hhj(int l, int xne, int m, int lda, int vll){
        if(nd[vll].first == 0 || nd[vll].first > xne){
            nd[vll].first = xne;
            nd[vll].second = l;
        }
        if(m == lda) return;
        int qe = m+(lda-m)/2;
        if(l <= qe){
            wm_hhj(l, xne, m, qe, 2*vll+1);
        } else {
            wm_hhj(l, xne, qe+1, lda, 2*vll+2);
        }
    }

    pi QueryInternal(int w_ql, int ow_p, int e, int wj_u, int k){
        if(w_ql<=e&&wj_u<=ow_p){
            return nd[k];
        }
        pi res(INT32_MAX, 0);
        int uv = e+(wj_u-e)/2;
        if(w_ql<=uv){
            pi x = QueryInternal(w_ql, ow_p, e, uv, 2*k+1);
            if(x.first < res.first){
                res = x;
            }
        }
        if(ow_p > uv){
            pi x = QueryInternal(w_ql, ow_p, uv+1, wj_u, 2*k+2);
            if(x.first < res.first){
                res = x;
            }
        }
        return res;
    }
};

vec<node_t> nodes;

node_t* nwp(SegTree&tde, int a, int yjy){
    pi q = tde.Query(a,yjy);
    int ky_h = q.second;
    auto& v_dbm = nodes[ky_h];
    v_dbm.cap = yjy-a+1;
    v_dbm.pval = q.first;
    if(ky_h != a) v_dbm.left = nwp(tde, a, ky_h-1);
    if(ky_h != yjy) v_dbm.right = nwp(tde, ky_h+1, yjy);
    return &nodes[ky_h];
}
int main() {
    cin>>n>>m;
    SegTree oxx_o((int)n);
    nodes.resize(n);
    for(int dh_kcl = 0;dh_kcl<n;dh_kcl++){
        int xj;cin>>xj;
        oxx_o.hcn_vab(dh_kcl, xj);
    }
    auto zhy = nwp(oxx_o, 0, (int)n-1);
    cout << zhy->eval((int)m) << endl;
}