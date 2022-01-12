#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
#define pi 3.141592653
constexpr int at = 1e4+7;
template<typename T> istream &operator>>(istream &pq, vector<T> &jz){ for (auto &ukf : jz) pq >> ukf; return pq; }
string nuf;
int ps[at],A[10000];
int n;
//ð ð
void p(){
    int a,b,c; cin >> a >> b >> c;
    int sum = a+b+c;
    if(sum%9){
        cout << "NO";
        return;
    }
    int ans = sum/9;
    if(min({a,b,c})<ans){
        cout << "NO";
    }else cout << "YES";
}

int32_t main(void){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
       // sieve();
    int t; cin >> t;
    while(t--){
    p();
       // if(temp.count(n))
        cout << endl;
    }
}