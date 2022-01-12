#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
	vector<int> v;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int w = max(a,b);
	int e = max(c,d);
	if(!(w < min(c,d) || e < min(a,b))){
		cout << "YES";
	}{
		cout << "NO";
	}
}
main(){
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int n;
		cin >> n;
		int a[n];
		{
		int i=0;
		for ( ; i < n; ) 
{
			cin >> a[i];
			i++; 
		
		}}
		int l = 0, r = n - 1;
		for ( ; l<=r; ) 
{
			if(!(l==r)){
				cout << a[l] << " " << a[r] << " ";
			}{
				cout << a[l];
			}++;
			r--;
		}
		cout << "\n";
	}
}