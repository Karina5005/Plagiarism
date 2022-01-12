#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
#define pi 3.141592653
constexpr int N = 1e4+7;
template<typename T> std::istream &operator>>(std::istream &is, vector<T> &vec);
string s;
int ps[N],A[10000];
int n;

void func();

int32_t main();

std::istream &operator>>(std::istream &is, int &vec) {
    return is;
}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        {
            func();
            cout << endl;
        }
}


void func() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    if (sum % 9) {
        cout << "NO";
        return;
    }
    long long ans = sum / 9;
    if (a < ans || b < ans || c < ans) {
        cout << "NO";
    } else
        cout << "YES";
}


