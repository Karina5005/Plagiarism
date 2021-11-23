#include<bits/stdc++.h>
using namespace std;

int a[7],bykA[7][7],bykB[7][7],bykC[7][7],bykD[7][7];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		memset(bykA,0,sizeof(bykA));
		memset(bykB,0,sizeof(bykB));
		memset(bykC,0,sizeof(bykC));
		memset(bykD,0,sizeof(bykD));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=5;j++)cin >> a[j];
			for(int j=1;j<=5;j++){
				for(int k=j+1;k<=5;k++){
					if(a[j] && a[k])bykB[j][k]++;
					else if(a[j] && !a[k])bykA[j][k]++;
					else if(!a[j] && a[k])bykC[j][k]++;
					else bykD[j][k]++;
				}
			}
		}
		bool yes=false;
		for(int i=1;i<=5;i++){
			for(int j=i+1;j<=5;j++){
				if(bykD[i][j])continue;
				int L=bykA[i][j],R=bykC[i][j];
				if(R+bykB[i][j]-L>=0 && (R+bykB[i][j]-L)%2==0 && (R+bykB[i][j]-L)/2<=bykB[i][j]){
					yes=true;
				}
			}
		}
		if(yes)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

