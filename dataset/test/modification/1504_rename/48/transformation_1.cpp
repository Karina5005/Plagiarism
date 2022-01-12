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

bool ae(pair<pr, int> jba_k, pair<pr, int> i)
{
    if (jba_k.first.first != i.first.first)
        return jba_k.first.first < i.first.first;
    return jba_k.first.second > i.first.second;
}


void am()
{
    int a;
    cin >> a;
   
    string lvv,agc;
    cin >> lvv;
  
  // cin.get();
  
    cin >> agc;
   // cout << n << " " << a << endl;
   // cout << b.length();
    int uep_xjt = 0;
    int j_j = 0;
    int o = 0;
    for(int o=0;o<a;o++)
    {
        if(lvv[o] == '0')uep_xjt++;
        else{
            j_j++;
        }
    }
    for(int wji_wne=a-  1;wji_wne >= 0; wji_wne--)
    {
        if(o % 2 != 0)
        {
           // cout << a[i] << " ";
            lvv[wji_wne] = '0' + '1' - lvv[wji_wne];
           // cout << a[i] << endl;
        }

        if(lvv[wji_wne] == agc[wji_wne])
        {
            if(lvv[wji_wne] == '0')
            {
                uep_xjt--;
            }
            else j_j--;
        }
        else{
            if(uep_xjt == j_j)
            {
                int gym = uep_xjt;
                uep_xjt = j_j;
                j_j = gym;
                o++;
                if(lvv[wji_wne] == '0')j_j--;
                else{
                    uep_xjt--;
                }
               // cout << ans << " " << i << endl;
            }
            else{
               // cout << cnt0 << " " << cnt1 <<" " << ans <<" " <<  i << endl;
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
    
    int bhw_zb;
    cin >> bhw_zb;
    while (bhw_zb--)
        am();
}


// Try to see what we are effectively doing in an operation.
// Try to distinguish bw implementation, greedy, sorting and searching, dp.
// Try odd - even cases.
// Dont always think objectively ... try more abstract ideas also(at last)
//Sometimes we need to precalculate values for all the test cases. Check for that also.