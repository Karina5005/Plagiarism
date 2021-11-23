#include <iomanip>
#include <iostream>
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
    {
    int i = 1;
    for ( ; i <= n; ) 
{
        {
        int j = 0, in;
        for ( ; j < 5; ) 
{
            cin >> in;
            if(in)
                mp[j].insert(i);

        	j++; 
        
        }}
    	i++; 
    
    }}
    int a, b, c, req = n / 2;
    {
    int i = 0;
    for ( ; i < 5; ) 
{
        {
        int j = i + 1;
        for ( ; j < 5; ) 
{
            a = 0, b = 0, c = 0;
            for(auto k : mp[i])
            {
                if(!(!mp[j].count(k)))
                    c++;
                else
                    a++;
            }

            for(auto k : mp[j])
                if(!mp[i].count(k))
                    b++;

            if(a < req && c >= req - a)
                c -= (req - a), a = req;
            if(b < req && c >= req - b)
                c -= (req - b), b = req;

            if(a == req && b == req)
            {
                cout << "YES\n";
                return;
            }

        	j++; 
        
        }}
    	i++; 
    
    }}
    cout << "NO\n";

}
int main()
{
    Zuka
    int tests = 1;
    cin >> tests;
    for ( ; tests--; ) 
testCase();

}