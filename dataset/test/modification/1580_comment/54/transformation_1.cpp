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
    ll eval(int cnt){
        /* 'if' begin */
        if(val.empty()) /* 'if' inside */
        val.resize(n+1, LLONG_MIN+1);
        /* 'if' begin */
        if(val[cnt]!=LLONG_MIN+1) /* 'if' inside */
        return val[cnt];
        /* 'if' begin */
        if(cnt > cap) /* 'if' inside */
        return LLONG_MIN;
        /* 'if' begin */
        if(cnt==0) /* 'if' inside */
        return 0;
        ll mx = LLONG_MIN;
        
        mx = eval_core(cnt-1);
        mx += (m-1)*pval;
        mx -= 2*(cnt-1)*pval;
        
        /* 'if' begin */
        if(cnt != cap)/* 'if' inside */
        {
            mx = max(eval_core(cnt), mx);
        }

        val[cnt] = mx;
        return mx;
    }

    [[nodiscard]] ll eval_core(int cnt) const{
        ll mx = LLONG_MIN;
        int rmax = right== nullptr?0:right->cap;
        int lmax = left== nullptr?0:left->cap;
        int imin = max(0,cnt-rmax);
        int imax = min(cnt, lmax);
        for(int i = imin;i<=imax;i++)/* 'for' inside */
        {
            ll v = 0;
            /* 'if' begin */
            if(i != 0)/* 'if' inside */
            {
                v += left->eval(i);
            }
            /* 'if' begin */
            if(i!=cnt)/* 'if' inside */
            {
                v += right->eval(cnt-i);
            }
            v -= 2*i*(cnt-i)*pval;
            mx = max(mx, v);
        }
        return mx;
    }
};

class SegTree{
public:
    explicit SegTree(int n):n(n){
        nd.resize(2<<(int)ceil(log2(n)));
    }
    void Add(int p, int val){
        AddInternal(p, val, 0, n-1, 0);
    }

    pi Query(int l, int r){
        return QueryInternal(l, r, 0, n-1, 0);
    }
private:
    int n;
    
    vec<pi> nd;

    void AddInternal(int p, int val, int nl, int nr, int nidx){
        /* 'if' begin */
        if(nd[nidx].first == 0 || nd[nidx].first > val)/* 'if' inside */
        {
            nd[nidx].first = val;
            nd[nidx].second = p;
        }
        /* 'if' begin */
        if(nl == nr) /* 'if' inside */
        return;
        int c = nl+(nr-nl)/2;
        /* 'if' begin */
        if(p <= c)/* 'if' inside */
        {
            AddInternal(p, val, nl, c, 2*nidx+1);
        } else {
            AddInternal(p, val, c+1, nr, 2*nidx+2);
        }
    }

    pi QueryInternal(int l, int r, int nl, int nr, int nidx){
        /* 'if' begin */
        if(l<=nl&&nr<=r)/* 'if' inside */
        {
            return nd[nidx];
        }
        pi res(INT32_MAX, 0);
        int c = nl+(nr-nl)/2;
        /* 'if' begin */
        if(l<=c)/* 'if' inside */
        {
            pi x = QueryInternal(l, r, nl, c, 2*nidx+1);
            /* 'if' begin */
            if(x.first < res.first)/* 'if' inside */
            {
                res = x;
            }
        }
        /* 'if' begin */
        if(r > c)/* 'if' inside */
        {
            pi x = QueryInternal(l, r, c+1, nr, 2*nidx+2);
            /* 'if' begin */
            if(x.first < res.first)/* 'if' inside */
            {
                res = x;
            }
        }
        return res;
    }
};

vec<node_t> nodes;

node_t* build(SegTree&st, int l, int r){
    pi q = st.Query(l,r);
    int pivot = q.second;
    auto& node = nodes[pivot];
    node.cap = r-l+1;
    node.pval = q.first;
    /* 'if' begin */
    if(pivot != l) /* 'if' inside */
    node.left = build(st, l, pivot-1);
    /* 'if' begin */
    if(pivot != r) /* 'if' inside */
    node.right = build(st, pivot+1, r);
    return &nodes[pivot];
}
int main() {
    cin>>n>>m;
    SegTree st((int)n);
    nodes.resize(n);
    for(int i = 0;i<n;i++)/* 'for' inside */
    {
        int x;cin>>x;
        st.Add(i, x);
    }
    auto root = build(st, 0, (int)n-1);
    cout << root->eval((int)m) << endl;
}