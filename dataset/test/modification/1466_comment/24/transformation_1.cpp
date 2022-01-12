#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int arr[n];
     map<int,int>m;
     for(int i=0;i<n;i++)
     /* 'for' inside */
     {
          cin>>arr[i];
     }
     sort(arr,arr+n);
     for(int i=1;i<n;i++)
     /* 'for' inside */
     {
          /* 'if' begin */
          if(arr[i]<=arr[i-1])
          /* 'if' inside */
          arr[i]++;
     }
     for(int i=0;i<n;i++)
     /* 'for' inside */
     {
          m[arr[i]]++;
     }
     cout<<m.size()<<endl;
}

int main() 
{
  int tc=1;
  cin>>tc;
  while(tc--)
  {
      solve();
  }
	return 0;
}
