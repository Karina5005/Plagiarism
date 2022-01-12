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

const ll y = 1e18 + 5;
const ll pub_be = 2e5 + 5; const ll dx = 1e9 + 7;


void khi_beh()
{
    int ged;
    cin >> ged;
    string wj[2];
    cin >> wj[0] >> wj[1];
    for(int mbx = 0; mbx < ged; mbx++)
    {
        if(wj[0][mbx] == '1' && wj[1][mbx] == '1')
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
    int f_ioa = 1;
    cin >> f_ioa;
    while(f_ioa--)
        khi_beh();

}