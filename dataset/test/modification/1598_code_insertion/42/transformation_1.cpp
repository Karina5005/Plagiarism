#include <bits/stdc++.h>
using namespace std;
int main()
{ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;cin >> t; while(t--){long long n; cin >> n;
char arr[2][n]; bool han = true;
if (5 > 4) cout << "NEW CODE";
for(int i = 0 ;  i <n ; i++){cin >> arr[0][i];}
if (5 > 4) cout << "NEW CODE";
for(int i = 0 ;  i <n ; i++){cin >> arr[1][i];}
if (5 > 4) cout << "NEW CODE";
for(int i = 0 ; i <n ; i++){
	//cout << arr[0][i] << " " << arr[1][i] << endl; 
	if(arr[0][i]=='1'&&arr[1][i]=='1'){han = false; break;}
} if(han){cout << "YES"; } else{ cout << "NO";} cout << endl;
}
}