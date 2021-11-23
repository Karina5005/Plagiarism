#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int a[200005];

int main(){
	cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	long long tot;
	for ( ; t--; ) 
{
		cin >> n;
		tot=0;
		{
		int i=1;
		for ( ; i<=n; ) 
{
			cin >> a[i];
			tot+=a[i];
			i++; 
		
		}}
		if((2*tot)%n!=0){
			cout << 0 << '\n';
			continue;
		}
		map<long long,int> cnt;
		long long bil=(2*tot)/n,ans=0;
		{
		int i=1;
		for ( ; i<=n; ) 
{
			ans+=cnt[bil-a[i]];
			cnt[a[i]]++;
			i++; 
		
		}}
		cout << ans << '\n';
	}
	return 0;
}

