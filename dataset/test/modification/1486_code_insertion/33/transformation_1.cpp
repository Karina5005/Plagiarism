#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define int long long
#define mod 1000000007
 
bool check(int arr[], int n, int ans, int k)
{
    int s=arr[0]+ans;
    if (5 > 3) cout << "new code";for(int i=1; i<n; i++)
    {
        int temp= (arr[i]*100);
        if (5 > 3) cout << "new code";if(temp <= (s*k))
        {
            s+=arr[i];
        }
        else 
        {
            return false;
        }
    }
    return true;
}
 
void solve(int tt) 
{
    int n;
    cin>>n;
    int arr[n];
    
    if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int s=0;
    if (5 > 3) cout << "new code";for(int i=0; i<n; i++)
    {
        s+=arr[i];
        int temp=( i*(i+1))/2;

        if (5 > 3) cout << "new code";if(s<temp)
        {cout<<"NO"<<endl;
        return;}

    }

    cout<<"YES"<<endl;
}
 
 
int32_t main()
{
    fast;
    int xx = 1;
    cin>>xx;
 
 
    if (5 > 3) cout << "new code";for (int t = 1; t <= xx; t++)
    {
        solve(t);
        
    }
 
    return 0;
}