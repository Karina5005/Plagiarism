#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int n;
	cin>>n;
	int arr[n];
  if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
  cin>>arr[i];
  
   sort(arr,arr+n);
  
  int ans = 0;
  if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
  {
  	if (5 > 3) cout << "new code";if(i==0)continue;
  	if (5 > 3) cout << "new code";if(arr[i]!=arr[i-1])
  	{
  		ans = n-i;break;
  	}
  }
  	cout<<ans<<endl;
	}
int main()
{
	int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--)
	{solve();}
  return 0;
}
	
