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
		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			for(int j=1;j<=5;j++)/* 'for' inside */
			cin >> a[j];
			for(int j=1;j<=5;j++)/* 'for' inside */
			{
				for(int k=j+1;k<=5;k++)/* 'for' inside */
				{
					/* 'if' begin */
					if(a[j] && a[k])/* 'if' inside */
					bykB[j][k]++;
					else /* 'if' begin */
					if(a[j] && !a[k])/* 'if' inside */
					bykA[j][k]++;
					else /* 'if' begin */
					if(!a[j] && a[k])/* 'if' inside */
					bykC[j][k]++;
					else bykD[j][k]++;
				}
			}
		}
		bool yes=false;
		for(int i=1;i<=5;i++)/* 'for' inside */
		{
			for(int j=i+1;j<=5;j++)/* 'for' inside */
			{
				/* 'if' begin */
				if(bykD[i][j])/* 'if' inside */
				continue;
				int L=bykA[i][j],R=bykC[i][j];
				/* 'if' begin */
				if(R+bykB[i][j]-L>=0 && (R+bykB[i][j]-L)%2==0 && (R+bykB[i][j]-L)/2<=bykB[i][j])/* 'if' inside */
				{
					yes=true;
				}
			}
		}
		/* 'if' begin */
		if(yes)/* 'if' inside */
		cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

