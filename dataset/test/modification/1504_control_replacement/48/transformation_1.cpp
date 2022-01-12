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
    if (a.first.first != b.first.first)
        return a.first.first < b.first.first;
    return a.first.second > b.first.second;
}


void solve()
{
    int n;
    cin >> n;
   
    string a,b;
    cin >> a;
  
  // cin.get();
  
    cin >> b;
   // cout << n << " " << a << endl;
   // cout << b.length();
    int cnt0 = 0;
    int cnt1 = 0;
    int ans = 0;
    {
    int i=0;
    while (i<n) {
        if(!(a[i] == '0')){
            cnt1++;
        }
        elsecnt0++;
    	i++; 
    
    }}
    {
    int i=n-  1;
    while (i >= 0) {
        if(ans % 2 != 0)
        {
           // cout << a[i] << " ";
            a[i] = '0' + '1' - a[i];
           // cout << a[i] << endl;
        }

        if(!(a[i] == b[i]))
        {
            if(cnt0 == cnt1)
            {
                int temp = cnt0;
                cnt0 = cnt1;
                cnt1 = temp;
                ans++;
                if(a[i] == '0')cnt1--;
                else{
                    cnt0--;
                }
               // cout << ans << " " << i << endl;
            }
            else{
               // cout << cnt0 << " " << cnt1 <<" " << ans <<" " <<  i << endl;
                cout << "NO" << '\n';
                return;
            }
        }
        else{
            if(a[i] == '0')
            {
                cnt0--;
            }
            else cnt1--;
        }
    	i--; 
    
    }}
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


// Try to see what we are effectively doing in an operation.
// Try to distinguish bw implementation, greedy, sorting and searching, dp.
// Try odd - even cases.
// Dont always think objectively ... try more abstract ideas also(at last)
//Sometimes we need to precalculate values for all the test cases. Check for that also.