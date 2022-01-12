#include <bits/stdc++.h>
using namespace std;
int main(){
	int h_qiv;
	cin >> h_qiv;
	while(h_qiv--){
		int uva;
		cin >> uva;
		vector<int> at(2*uva);
		for(int pq=0;pq<2*uva;pq++)cin >> at[pq];
		sort(at.begin(),at.end());
		for(int jz=0;jz<uva;jz++){
			cout << at[jz] << " "<< at[jz+uva] << " ";
		}
		cout << "\n";
	}
}
