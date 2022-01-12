#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int n;
	cin>>n;
	int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
   sort(arr,arr+n);
  
  int ans = 0;
  for(int i=0;i<n;i++)
  {
  	if(i==0)continue;
  	if(arr[i]!=arr[i-1])
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
	while(t--)
	{solve();}
  return 0;
}
	
