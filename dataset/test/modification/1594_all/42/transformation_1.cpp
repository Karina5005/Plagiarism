#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const int km=1e9+7;
vector<int>ieo_i(1000001);
ll mod(ll x){
    return ((x%km+km)%km);
}
ll add(ll a,ll b){
    return mod(mod(a)+mod(b));
}
ll mul(ll a,ll b){
    return mod(mod(a)*mod(b));
}
ll power(ll a,ll b){
    ll res=1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(b&1)/* 'if' inside */
        {
            res=mod((res*a));
        }
        b=b>>1;
        a=mod(a*a);
    }
    
    return res;
    
}
void p_jl();
int main();

void g_alu() {
    int iv;
    cin >> iv;
    unsigned long long x = pow(2, iv) - 1;
    cout << mod(6 * mod(power(4, x - 1)));
}


int main() {
    
    cin.tie(__null);
    freopen("input_tarun.txt", "r", stdin);
    freopen("output_kumar.txt", "w", stdout);
    g_alu();
}


