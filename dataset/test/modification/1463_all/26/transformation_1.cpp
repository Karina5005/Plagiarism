
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>


#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vll vector<ll>
#define endl '\n'
#define mod 1000000007

#define ACCELERATE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(__null);
    cout.tie(__null);
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    int tt = 1;
    cin >> tt;
    while (tt--)
        {
            long long a, b, c;
            cin >> a >> b >> c;
            long long sum = a + b + c;
            if (sum % 9 == 0 && min({a, b, c}) >= (sum / 9))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    return 0;
}


