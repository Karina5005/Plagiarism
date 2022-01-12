
/* 
   ========================= 
    Author : Raj V. Bundela
   =========================
*/

#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define nl printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define here cout<<"here"<<endl;
#define F first
#define S second
#define ln(x) x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define rev(x, i, n) for(int i=0; i<n/2; i++) swap(x[i], x[n-i-1]); 
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

/* ====================================================================== globals here ====================================================================== */

const int mod = 1'000'000'007;
const int N = 3e5;


/* ================================================================== solving function here ================================================================= */

void solve() {
    ll a, b, c;
    cin>>a>>b>>c;
    
    ll tot = a+b+c;
    if(tot%9){
        cout<<"NO"<<endl;
        return;
    }
    ll times = tot/9;
    if(a<times || b<times || c<times)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}

/* ================================================================== main function here ==================================================================== */

int main() {    
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin>>(t);
    while(t--) {
        solve();
    }

    return 0;
}