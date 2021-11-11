#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   /* 'for' inside */
   {
       arr[i]=i+1;
   }
   /* 'if' begin */
   if(n%2==0)
   /* 'if' inside */
   {
       for(int i=0;i<n-1;)
       /* 'for' inside */
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
       for(int i=3;i<n;)
       /* 'for' inside */
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

