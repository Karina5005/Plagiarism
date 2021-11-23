#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		/* 'for' inside */
		a[i]=i;
		for(int i=1;i<n;i+=2)
		/* 'for' inside */
		swap(a[i],a[i+1]);
		/* 'if' begin */
		if(n%2==1)
		/* 'if' inside */
		{
			swap(a[n],a[n-1]);
		}
		for(int i=1;i<=n;i++)
		/* 'for' inside */
		cout<<a[i]<<' ';
		cout<<endl;
	}
	return 0;
}
		 		 				 			  		 	 		 			