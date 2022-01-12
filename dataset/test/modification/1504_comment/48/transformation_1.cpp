#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define pr pair<int, int>
#define prl pair<long long, long long>
#define mp make_pair
#define pb push_back
#define N 1000000007

bool comp(pair<pr, int> a, pair<pr, int> b)
{
    /* 'if' begin */
    if (a.first.first != b.first.first)
        /* 'if' inside */
        return a.first.first < b.first.first;
    return a.first.second > b.first.second;
}


void solve()
{
    int n;
    cin >> n;
   
    string a,b;
    cin >> a;
  
  
  
    cin >> b;
   
    int cnt0 = 0;
    int cnt1 = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(a[i] == '0')/* 'if' inside */
        cnt0++;
        else{
            cnt1++;
        }
    }
    for(int i=n-  1;i >= 0; i--)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(ans % 2 != 0)
        /* 'if' inside */
        {
           
            a[i] = '0' + '1' - a[i];
           
        }

        /* 'if' begin */
        if(a[i] == b[i])
        /* 'if' inside */
        {
            /* 'if' begin */
            if(a[i] == '0')
            /* 'if' inside */
            {
                cnt0--;
            }
            else cnt1--;
        }
        else{
            /* 'if' begin */
            if(cnt0 == cnt1)
            /* 'if' inside */
            {
                int temp = cnt0;
                cnt0 = cnt1;
                cnt1 = temp;
                ans++;
                /* 'if' begin */
                if(a[i] == '0')/* 'if' inside */
                cnt1--;
                else{
                    cnt0--;
                }
               
            }
            else{
               
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
        solve();
}


