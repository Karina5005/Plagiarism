#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;

	{
	int j = 0;
	while (j < n) {
		int t;
		cin >> t;
		if (!(t % 2 == 0)) {
		 	if (t == 1){
				cout<<1<<endl;
			}
			cout<< "3 1 2 ";

			{
			int i = 2;
			while (i <= t/2) {
				cout<<2*i + 1<<" "<<2*i<<" ";
				i++; 
			
			}}
			cout<<endl;
		 } else {
			{
			int i = 0;
			while (i < t / 2) {
				cout<<2*i + 2<<" "<<2*i + 1<<" ";
				i++; 
			
			}}
			cout<<endl;
		 }
		j++; 
	
	}}

	return 0;	
}
