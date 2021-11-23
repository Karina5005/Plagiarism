#include <bits/stdc++.h>
using namespace std;
int main()
{ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int faw;cin >> faw; while(faw--){long long lp; cin >> lp;
char q[2][lp]; bool abt_a = true;
for(int kqx = 0 ;  kqx <lp ; kqx++){cin >> q[0][kqx];}
for(int rga_egv = 0 ;  rga_egv <lp ; rga_egv++){cin >> q[1][rga_egv];}
for(int za = 0 ; za <lp ; za++){
	//cout << arr[0][i] << " " << arr[1][i] << endl; 
	if(q[0][za]=='1'&&q[1][za]=='1'){abt_a = false; break;}
} if(abt_a){cout << "YES"; } else{ cout << "NO";} cout << endl;
}
}