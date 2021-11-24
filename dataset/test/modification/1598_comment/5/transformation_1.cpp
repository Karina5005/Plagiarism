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
    map<int, set<int>>mp;
    for(int i = 1; i <= n; i++)
    /* 'for' inside */
    {
        for(int j = 0, in; j < 5; j++)
        /* 'for' inside */
        {
            cin >> in;
            /* 'if' begin */
            if(in)
                /* 'if' inside */
                mp[j].insert(i);

        }
    }
    int a, b, c, req = n / 2;
    for(int i = 0; i < 5; i++)
    /* 'for' inside */
    {
        for(int j = i + 1; j < 5; j++)
        /* 'for' inside */
        {
            a = 0, b = 0, c = 0;
            for(auto k : mp[i])
            {
                /* 'if' begin */
                if(!mp[j].count(k))
                    /* 'if' inside */
                    a++;
                else
                    c++;
            }

            for(auto k : mp[j])
                /* 'if' begin */
                if(!mp[i].count(k))
                    /* 'if' inside */
                    b++;

            /* 'if' begin */
            if(a < req && c >= req - a)
                /* 'if' inside */
                c -= (req - a), a = req;
            /* 'if' begin */
            if(b < req && c >= req - b)
                /* 'if' inside */
                c -= (req - b), b = req;

            /* 'if' begin */
            if(a == req && b == req)
            /* 'if' inside */
            {
                cout << "YES\n";
                return;
            }

        }
    }
    cout << "NO\n";

}
int main()
{
    Zuka
    int tests = 1;
    cin >> tests;
    while(tests--)
        testCase();

}