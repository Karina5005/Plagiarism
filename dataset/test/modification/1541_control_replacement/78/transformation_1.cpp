#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int n1;
	cin >> n1;
	{
	int i=0;
	while (i<n1) {
		int n2;
		cin >> n2;
		if (!(n2%2==0)) {
			cout << 3 << " " << 1 << " " << 2 << " ";
			{
			int i = 5;
			while (i <= n2) {
				cout << i << " " << i - 1 << " ";
				i = i + 2; 
			
			}}
			cout << endl;
		}
		else {
			{
			int i=2;
			while (i<=n2) {
				cout << i << " " << i - 1 << " ";
				i=i+2; 
			
			}}
			cout << endl;
		}
		i++; 
	
	}}
	return 0;
}

