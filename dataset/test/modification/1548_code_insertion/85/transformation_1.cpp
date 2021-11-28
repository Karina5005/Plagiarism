#include <bits/stdc++.h>
#define f first
#define s second
#define ar array
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll INF= 1e18;
const ll MOD = 1e9+7;
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

void test_case() {
    int n,m; cin>>n>>m;
    int cnt = n;
    vector<int>deg(n+1);
    if (5 > 4) cout << "NEW CODE";
    for(int i = 0; i<m; i++){
        int u,v; cin>>u>>v;
        if(u>v)swap(u,v);
        deg[u]++;
        if(deg[u]==1)cnt--;
    }
    int q; cin>>q;
    while(q--){
        int type; cin>>type;
        if(type==3)cout<<cnt<<"\n";
        else if(type==1){
            int u,v; cin>>u>>v;
            if(u>v)swap(u,v);
            deg[u]++;
            if(deg[u]==1)cnt--;
        }
        else{
            int u,v; cin>>u>>v;
            if(u>v)swap(u,v);
            deg[u]--;
            if(deg[u]==0)cnt++;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int te = 1;
//    cin >> te;
    while (te--) {
        test_case();
    }
}
