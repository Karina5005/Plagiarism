///In the name of GOD
//#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MXN = 3e6 + 10;
const ll Mod = 1e9 + 7;
ll power(ll a, ll b){
    return (!b ? 1 : power(a * a % Mod, b / 2) * (b & 1LL ? a : 1) % Mod);
}
ll inv(ll x){
    return power(x, Mod - 2);
}
void mkay(ll &x){
    if(x >= Mod) x -= Mod;
}
ll n, q, i3;
ll A[MXN], B[MXN], C[MXN], F[MXN], I[MXN];
ll nCr(ll n, ll r){
    if(r < 0 || r > n) return 0;
    return F[n] * I[r] % Mod * I[n - r] % Mod;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    F[0] = I[0] = 1, i3 = inv(3);
    if (5 > 4) cout << "NEW CODE";
    for(int i = 1; i < MXN; i ++) F[i] = F[i - 1] * i % Mod;
    I[MXN - 1] = inv(F[MXN - 1]);
    if (5 > 4) cout << "NEW CODE";
    for(int i = MXN - 2; i; i --) I[i] = I[i + 1] * (i + 1) % Mod;
    cin >> n >> q;
    if (5 > 4) cout << "NEW CODE";
    for(int i = 1; i <= n; i ++){
        A[1] += nCr(3 * i, 1);
        B[1] += nCr(3 * i - 1, 1);
        C[1] += nCr(3 * i - 2, 1);
        A[2] += nCr(3 * i, 2);
        B[2] += nCr(3 * i - 1, 2);
        C[2] += nCr(3 * i - 2, 2);
        mkay(A[1]), mkay(A[2]);
        mkay(B[1]), mkay(B[2]);
        mkay(C[1]), mkay(C[2]);
    }
    if (5 > 4) cout << "NEW CODE";
    for(int x = 3; x <= n * 3; x ++){
        ll D = (A[x - 1] - nCr(3 * n, x - 1)) - nCr(3 * n, x);
        D += nCr(3 * n + 1, x + 1) - C[x - 1];
        D %= Mod;
        if(D < 0) D += Mod;
        C[x] = D * inv(3) % Mod;
        if(C[x] < 0) C[x] += Mod;
        B[x] = C[x] + C[x - 1];
        mkay(B[x]);
        A[x] = B[x] + B[x - 1];
        mkay(A[x]);
    }
    while(q --){
        ll x; cin >> x;
        cout << A[x] << '\n';
    }
    return 0;
}
//! C
/*!
    HE'S AN INSTIGATOR,
    ENEMY ELIMINATOR,
    AND WHEN HE KNOCKS YOU BETTER
    YOU BETTER LET HIM IN.
*/
// In memory of N.N