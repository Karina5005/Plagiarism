#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int n;
		cin >> n;
		vector<int> vp(2*n);
		{
		int i=0;
		for ( ; i<2*n; ) 
{
		cin >> vp[i];
		i++; 
		
		}}
		sort(vp.begin(),vp.end());
		{
		int i=0;
		for ( ; i<n; ) 
{
			cout << vp[i] << " "<< vp[i+n] << " ";
			i++; 
		
		}}
		cout << "\n";
	}
}
