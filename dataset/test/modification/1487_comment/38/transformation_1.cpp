#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int n;
	cin>>n;
	int arr[n];
  for(int i=0;i<n;i++)
  /* 'for' inside */
  cin>>arr[i];
  
   sort(arr,arr+n);
  
  int ans = 0;
  for(int i=0;i<n;i++)
  /* 'for' inside */
  {
  	/* 'if' begin */
  	if(i==0)/* 'if' inside */
  	continue;
  	/* 'if' begin */
  	if(arr[i]!=arr[i-1])
  	/* 'if' inside */
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
	
