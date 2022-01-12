#include <bits/stdc++.h>
using namespace std;
#define maxN 200006
#define ll long long int
#define MOD (ll)998244353
#define mod (ll)1000000007

void Solve()
{
    // Read the Question Once Again
    // check brute force with time complexity
    //  A and B do no think of algorithm.
    // Do not give up
    /*

     10         01
     ()         ()
     ((          ))
                 ((
                  )(
     ))
     )(

    */
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;

    if (str[0] == '0' || str[n - 1] == '0')
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '1')
            cnt1++;
        else
            cnt2++;
    }
    if (cnt1 % 2 != 0 || cnt2 % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    //cnt1 -= cnt2;
    /// cnt1 = 0, cnt2 = 0;
    cnt1 /= 2;
    bool flag=true;
    string ans1 = "";
    string ans2 = "";
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            if (cnt1)
            {
                ans1 += '(';
                ans2 += '(';
                cnt1--;
            }
            else
            {
                ans1 += ')';
                ans2 += ')';
            }
        }
        else
        {
            if (flag)
            {
                ans1 += ')';
                ans2 += '(';
            }
            else
            {
                ans1 += '(';
                ans2 += ')';
            }
            flag = !flag;
        }
    }
    cout<<"YES"<<endl;
    cout<<ans1<<endl;
    cout<<ans2<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // fun();
    ll test;
    cin >> test;
    while (test--)
        Solve();
}
