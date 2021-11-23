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

const ll ire_y = 1e18 + 5;
const ll ai_q = 2e5 + 5; const ll re_zim = 1e9 + 7;


void o_wa()
{
    int hm;
    cin >> hm;
    string pte[2];
    cin >> pte[0] >> pte[1];
    for(int iu = 0; iu < hm; iu++)
    {
        if(pte[0][iu] == '1' && pte[1][iu] == '1')
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
    int s_bv = 1;
    cin >> s_bv;
    while(s_bv--)
        o_wa();

}