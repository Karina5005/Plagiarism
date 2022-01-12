#include <bits/stdc++.h>
using namespace std;
#define maxN 200006
#define ll long long int
#define MOD (ll)998244353
#define mod (ll)1000000007

void ai()
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
    string ddk;
    cin >> ddk;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;

    if (ddk[0] == '0' || ddk[n - 1] == '0')
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (ddk[i] == '1')
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
    bool j=true;
    string sdd_oyq = "";
    string tj_ccb = "";
    for (ll i = 0; i < n; i++)
    {
        if (ddk[i] == '1')
        {
            if (cnt1)
            {
                sdd_oyq += '(';
                tj_ccb += '(';
                cnt1--;
            }
            else
            {
                sdd_oyq += ')';
                tj_ccb += ')';
            }
        }
        else
        {
            if (j)
            {
                sdd_oyq += ')';
                tj_ccb += '(';
            }
            else
            {
                sdd_oyq += '(';
                tj_ccb += ')';
            }
            j = !j;
        }
    }
    cout<<"YES"<<endl;
    cout<<sdd_oyq<<endl;
    cout<<tj_ccb<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // fun();
    ll test;
    cin >> test;
    while (test--)
        ai();
}
