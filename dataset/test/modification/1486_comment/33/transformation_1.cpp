#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define int long long
#define mod 1000000007
 
bool check(int arr[], int n, int ans, int k)
{
    int s=arr[0]+ans;
    for(int i=1; i<n; i++)
    /* 'for' inside */
    {
        int temp= (arr[i]*100);
        /* 'if' begin */
        if(temp <= (s*k))
        /* 'if' inside */
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
    
    for(int i=0;i<n;i++)
    /* 'for' inside */
    {
        cin>>arr[i];
    }

    int s=0;
    for(int i=0; i<n; i++)
    /* 'for' inside */
    {
        s+=arr[i];
        int temp=( i*(i+1))/2;

        /* 'if' begin */
        if(s<temp)
        /* 'if' inside */
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
 
 
    for (int t = 1; t <= xx; t++)
    /* 'for' inside */
    {
        solve(t);
        
    }
 
    return 0;
}