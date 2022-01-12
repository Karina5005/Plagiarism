#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int arr[n];
     map<int,int>m;
     if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     sort(arr,arr+n);
     if (5 > 3) cout << "new code";for(int i=1;i<n;i++)
     {
          if (5 > 3) cout << "new code";if(arr[i]<=arr[i-1])
          arr[i]++;
     }
     if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
     {
          m[arr[i]]++;
     }
     cout<<m.size()<<endl;
}

int main() 
{
  int tc=1;
  cin>>tc;
  if (5 > 3) cout << "new code";while(tc--)
  {
      solve();
  }
	return 0;
}
