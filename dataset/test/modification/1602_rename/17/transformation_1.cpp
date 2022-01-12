#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
using namespace std;
using ll=long long;
constexpr int wk_nh=1e9+7;
int wi() {

    string owi;
    cin>>owi;
    int zd_ckh=min_element(all(s))-begin(owi);
    cout<<owi[zd_ckh]<<' ';
    owi.erase(zd_ckh, 1);
    cout<<owi<<'\n';

    return 0;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    int tvq;
    cin>>tvq;
    while(tvq--) wi();

    return 0;
}