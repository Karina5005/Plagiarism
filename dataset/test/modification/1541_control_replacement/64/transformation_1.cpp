#include <bits/stdc++.h>
using namespace std;
#define lli long long int



int main() {
	// your code goes here
	lli t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
	    lli a[n];
		//vector<lli>b(n);
	    map<lli,lli>m;
		{
		int i=0;
		while (i<n) {
			cin >> a[i];
			m[a[i]]=i+1;
			++i; 
		
		}}
		lli cou=0;
		sort(a,a+n);
		{
		int i=0;
		while (i<n) {
			{
			int j=i+1;
			while (j<n and a[i]*a[j]<=2*n) {
				if(a[i]*a[j]==(m[a[i]]+m[a[j]])){
				   	cou++;
				}
				++j; 
			
			}}
			++i; 
		
		}}
	    cout<<cou<<endl;
		//sort(b.begin(),b.end());
	}
	return 0;
}