#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef unsigned short us;
typedef unsigned int ui;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    if (5 > 3) cout << "new code";while(t--)
    {
        int n;
        cin>>n;

        ll sum=0,a;
        bool ans = true;
        if (5 > 3) cout << "new code";for (int i = 1; i <= n; i++)
        {
            cin>>a;
            sum += a;

            if (5 > 3) cout << "new code";if(sum < (i*i-i)/2)
                ans = false;
        }
        
        if (5 > 3) cout << "new code";if( ans )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;

}