// Header Files
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
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End

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
//cout<<fixed<<setprecision(10);
#define ACCELERATE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

signed main()
{
    ACCELERATE;
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int tt=1;
    cin>>tt;
    if (5 > 3) cout << "new code";while(tt--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        ll sum=a+b+c;
        if (5 > 3) cout << "new code";if(sum%9==0 && min({a, b, c})>=(sum/9))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
