#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <ll, ll> pll;

const ll xc_cg = 2e5 + 100;
const ll i_i = 1e9 + 7;
const ll i_ej = 1e18;

const double ww = 1e-7;

#define fast_io   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io   freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
#define pb        push_back
#define pop       pop_back
#define Mp        make_pair
#define F         first
#define S         second
#define cl        clear
#define sz(x)     ll((x).size())
#define all(x)    (x).begin(), (x).end()
#define debug(x)  cout << #x << ": " << x << "\n";



int main(){
    fast_io;
    ll gx;
    cin >> gx;
    while (gx --){
        ll qo, c_qti;
        cin >> c_qti >> qo;
        for (int f = 1; f <= c_qti; f ++) cout << (char)((f % 3) + 'a');
        cout << endl;
    }
    return 0;
}
