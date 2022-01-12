#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int inf = 9e18;
int mod = 1e9 + 7;

void uva()
{
    int n=3;
    //cin >> n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
    cin >> arr[i];
    sum+=arr[i];
    }
    int x=(sum/9);
    if(sum%9==0 and arr[0] >=x and arr[1]>=x and arr[2]>=x)
    cout <<"yes";
    else
    cout << "no";
    cout << endl;

    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
{
    uva();
}
    return 0;
}