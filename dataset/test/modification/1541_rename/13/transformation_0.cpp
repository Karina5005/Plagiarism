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
		a[i]=i;
		for(int i=1;i<n;i+=2)
		swap(a[i],a[i+1]);
		if(n%2==1)
		{
			swap(a[n],a[n-1]);
		}
		for(int i=1;i<=n;i++)
		cout<<a[i]<<' ';
		cout<<endl;
	}
	return 0;
}
		 		 				 			  		 	 		 			