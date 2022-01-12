#include <bits/stdc++.h>

#define INF 1000000021
#define MOD 1000000007
#define pb push_back
#define sqr(a) (a)*(a)
#define M(a, b) make_pair(a,b)
#define int long long
#define T(a, b, c) make_pair(a, make_pair(b, c))
#define F first
#define S second
#define all(x) sort(x.begin(), x.end())
#define rall(x) sort(x.rbegin(), x.rend())
#define deb(x) cerr << #x << " = " << x << '\n'
#define N 222222

using namespace std;
//using namespace __gnu_pbds;

typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

const ld pi = 2 * acos(0.0);

//int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int gcd(int a, int b) {
    return b ? gcd (b, a % b) : a;
}

int binpow (int a, int n) {
    if (n == 0)
        return 1LL;
    if (n % 2 == 1)
        return ((binpow (a, n-1)%MOD) * 1LL * a)%MOD;
    else {
        int b = binpow (a, n/2)%MOD;
        return (b * b)%MOD;
    }
}

//void swap(int &a, int &b){
//    b = (a+b) - (a=b);
//}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n; i > 0; i--){
        bool b = 0;
        for(int j = 0; j < n; j++){
            int x = a[j];
            while(x > i) x /= 2;
            if(x == i){
                b = 1;
                a[j] = 0;
                break;
            }
        }
        if(!b){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }

    return 0;
}