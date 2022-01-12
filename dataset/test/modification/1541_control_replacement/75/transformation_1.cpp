#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	for ( ; t--; ) 
{
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x : v)cin >> x;
		int ans = 0;
		{
		int i = 0;
		for ( ; i < n; ) 
{
			{
			int j = v[i]-i-2;
			for ( ; j < n; ) 
{
				if(j <= i)++i; j+=v[i]; continue;
				if(1ll*i+j+2 == 1ll*v[i]*v[j])ans++;
				j+=v[i]; 
			
			}}
			++i; 
		
		}}
		cout << ans << '\n';
	}
}
