#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
		a[i]=i;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<n;i+=2)
		swap(a[i],a[i+1]);
		if(n%2==1)
		{
			swap(a[n],a[n-1]);
		}
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
		cout<<a[i]<<' ';
		cout<<endl;
	}
	return 0;
}
		 		 				 			  		 	 		 			