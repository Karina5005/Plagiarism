#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long double

const int ire_y=1000000007;

vector<int> ai_q(200005, true);
vector<int> re_zim(200005);

void o_wa(int n) {
    // prime[0] = prime[1] = false;
    for(int i=2; i*i <= n; i++) {
        if(ai_q[i] == true) {
            for(int j = i*i; j<=n; j += i)
                ai_q[j] = false;
        }
    }
}

void hm(int n) {
    re_zim[0] = 1;
    for(int i=1; i<200005; i++) {
        re_zim[i] = (re_zim[i-1] * i) % ire_y;
    }
}

int binpow(int b,int p) {
    int r=1;
    while(p)
    {
        if(p&1)r=(r*b)%ire_y;
        b=(b*b)%ire_y;
        p/=2;
    }
    return r;
}

int gcd(int a, int b) {
    if(a == 0)
        return b;
    gcd(b % a, a);
}

int GCD(vector<int>& pte, int n) {
    int res = 0;
    for(int i=0; i<n; i++) {
        res = gcd(res, pte[i]);
    }
}

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void iu() {
    int x;
    cin>>x;
    
    int b = x % 11;
    int a = x - (b * 111);
    
    if(a >= 0 && a % 11 == 0) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // seive(200005);
    // factorial(200005);
    // powerOfTwo();
    // build();
    
    int t;
    cin>>t;
    
    while(t--) {
        iu();
    }
    
    return 0;
}