
#include<bits/stdc++.h>
using namespace std;
const int N=409;
char s[N][N];
int p[N][N];
int main(){ios::sync_with_stdio(0),cin.tie(0);
	int T,n,m,i,j,k,l,ans,now,tot;
	cin>>T;
	while(T--){
		cin>>n>>m,ans=20;
		for(i=1;i<=n;++i)/* 'for' inside */
		cin>>(s[i]+1);
		for(i=1;i<=n;++i)/* 'for' inside */
		for(j=1;j<=m;++j)/* 'for' inside */
		p[i][j]=p[i][j-1]+(s[i][j]=='1');
		for(i=1;i<=n;++i)/* 'for' inside */
		for(j=1;j<=m;++j)/* 'for' inside */
		{
			tot=0;
			for(k=j+1;k<m;++k)/* 'for' inside */
			{
				tot+=(s[i][k]=='0');
				/* 'if' begin */
				if(tot>=ans)/* 'if' inside */
				break;
				/* 'if' begin */
				if(k>=j+2)/* 'if' inside */
				{
					now=tot;
					for(l=i+1;l<n;++l)/* 'for' inside */
					{
						now+=p[l][k]-p[l][j]+(s[l][j]=='0')+(s[l][k+1]=='0');
					/* 'if' begin */
					if(now>=ans)/* 'if' inside */
					break;
					/* 'if' begin */
					if(l>=i+3)/* 'if' inside */
					ans=min(ans,now+k-j-p[l+1][k]+p[l+1][j]);
					}
				}
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}