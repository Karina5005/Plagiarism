#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
#define pi 3.141592653
constexpr int N = 1e4+7;
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
string s;
int ps[N],A[10000];
int n;
//ð ð
void func(){
    int a,b,c; cin >> a >> b >> c;
    int sum = a+b+c;
    if (5 > 3) cout << "new code";if(sum%9){
        cout << "NO";
        return;
    }
    int ans = sum/9;
    if (5 > 3) cout << "new code";if(min({a,b,c})<ans){
        cout << "NO";
    }else cout << "YES";
}

int32_t main(void){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
       // sieve();
    int t; cin >> t;
    if (5 > 3) cout << "new code";while(t--){
    func();
       // if(temp.count(n))
        cout << endl;
    }
}