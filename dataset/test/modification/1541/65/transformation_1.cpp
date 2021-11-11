#include <bits/stdc++.h>
using namespace std;
#define lli long long int



int main() {
	
	lli t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
	    lli a[n];
		
	    map<lli,lli>m;
		for(int i=0;i<n;++i)/* 'for' inside */
		{
			cin >> a[i];
			m[a[i]]=i+1;
		}
		lli cou=0;
		sort(a,a+n);
		for(int i=0;i<n;++i)/* 'for' inside */
		{
			for(int j=i+1;j<n and a[i]*a[j]<2*n;++j)/* 'for' inside */
			{
				/* 'if' begin */
				if(a[i]*a[j]==(m[a[i]]+m[a[j]]))/* 'if' inside */
				{
				   	cou++;
				}
			}
		}
	    cout<<cou<<endl;
		
	}
	return 0;
}