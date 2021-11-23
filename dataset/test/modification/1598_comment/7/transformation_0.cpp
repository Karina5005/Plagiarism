#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define el '\n'
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define Zuka  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll INF = 1e18 + 5;
const ll N = 2e5 + 5; const ll mod = 1e9 + 7;


void testCase()
{
    int n;
    cin >> n;
    string arr[2];
    cin >> arr[0] >> arr[1];
    for(int i = 0; i < n; i++)
    {
        if(arr[0][i] == '1' && arr[1][i] == '1')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    Zuka
    int tests = 1;
    cin >> tests;
    while(tests--)
        testCase();

}