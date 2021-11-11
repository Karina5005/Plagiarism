#include<bits/stdc++.h>
using namespace std;
int n,m,s[410][410];
int sum1(int x,int y,int a,int b){
	return s[a][b]-s[x-1][b]-s[a][y-1]+s[x-1][y-1];
}
int sum2(int x,int y,int a,int b){
	return (a-x+1)*(b-y+1)-sum1(x,y,a,b);
}


int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			for(int j=1;j<=m;j++)/* 'for' inside */
			{
				char ch=0;
				while(!isdigit(ch))ch=getchar();
				s[i][j]=ch-'0';
			}
		}
		int res=0x7fffffff;
		for(int i=1;i<=n;i++)/* 'for' inside */
		{
			for(int j=1;j<=m;j++)/* 'for' inside */
			{
				s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
			}
		}
		for(int x=1;x<=n;x++)/* 'for' inside */
		{
			for(int y=1;y<=m;y++)/* 'for' inside */
			{
				for(int a=x+4;a<=n;a++)/* 'for' inside */
				{
					for(int b=y+3;b<=m;b++)/* 'for' inside */
					{
						int res1=sum2(x,y+1,x,b-1)+sum2(x+1,y,a-1,y);
						int res2=sum2(x+1,b,a-1,b)+sum2(a,y+1,a,b-1);
						int res3=sum1(x+1,y+1,a-1,b-1);
						/* 'if' begin */
						if(res<res1+res3)/* 'if' inside */
						break;
						res=min(res,res1+res2+res3);
					}
				}
			}
		}
		cout<<res<<endl;
	}
	
	
	return 0;
} 