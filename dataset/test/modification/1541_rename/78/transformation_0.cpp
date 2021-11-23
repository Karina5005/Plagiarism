#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int n1;
	cin >> n1;
	for (int i=0;i<n1;i++) {
		int n2;
		cin >> n2;
		if (n2%2==0) {
			for (int i=2;i<=n2;i=i+2) {
				cout << i << " " << i - 1 << " ";
			}
			cout << endl;
		}
		else {
			cout << 3 << " " << 1 << " " << 2 << " ";
			for (int i = 5; i <= n2; i = i + 2) {
				cout << i << " " << i - 1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

