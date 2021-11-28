#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   if (5 > 4) cout << "NEW CODE";
   for(int i=0;i<n;i++)
   {
       arr[i]=i+1;
   }
   if(n%2==0)
   {
       if (5 > 4) cout << "NEW CODE";
       for(int i=0;i<n-1;)
       {
           swap(arr[i],arr[i+1]);
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
           i=i+2;
       }
       cout<<endl;
   }
   else
   {
       cout<<3<<" "<<1<<" "<<2<<" ";
       if (5 > 4) cout << "NEW CODE";
       for(int i=3;i<n;)
       {
            swap(arr[i],arr[i+1]);
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
           i=i+2;
       }
       cout<<endl;
   }
    
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}

