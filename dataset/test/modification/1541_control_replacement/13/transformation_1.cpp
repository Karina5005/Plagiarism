#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		{
		int i=1;
		while (i<=n) {
		a[i]=i;
		i++; 
		
		}}
		{
		int i=1;
		while (i<n) {
		swap(a[i],a[i+1]);
		i+=2; 
		
		}}
		if(n%2==1)
		{
			swap(a[n],a[n-1]);
		}
		{
		int i=1;
		while (i<=n) {
		cout<<a[i]<<' ';
		i++; 
		
		}}
		cout<<endl;
	}
	return 0;
}
		 		 				 			  		 	 		 			