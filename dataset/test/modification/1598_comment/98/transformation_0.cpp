#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N][6];
int main(void)
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=5;j++) cin>>a[i][j];
		bool flag=false;
		for(int i=1;i<=5;i++)//ç¬¬ä¸ç»
		{
			for(int j=i+1;j<=5;j++)//ç¬¬äºç»
			{
				int cnt1=0,cnt2=0,cnt3=0;//cnt1 cnt2 æ¯åç¬ç
				for(int k=1;k<=n;k++)//ææçäººæ°
				{
					if(a[k][i] &&!a[k][j]) cnt1++;
					if(!a[k][i]&&a[k][j])  cnt2++;
					if(a[k][i] &&a[k][j])  cnt3++;//äº¤é
				}
				if(cnt1+cnt2+cnt3==n)//äººæ°å¤å¨é¨ç
				{
				    if(cnt1>cnt2)
				    {
					    int temp=cnt1-cnt2;
					    if(cnt3>=temp&& (cnt3-temp) %2==0 && (cnt1 || cnt2 || cnt3 ) ) flag=1;
				    }
				    else if(cnt1==cnt2)
				    {
					    if( cnt3%2==0&& (cnt1|| cnt2 ||cnt3) ) flag=1;
				    }
				    else 
				    {
					    int temp=cnt2-cnt1;
					    if(cnt3>=temp && (cnt3-temp)%2==0 && (cnt1 ||cnt2 ||cnt3)) flag=1;
				    }
				}
			}
		}
		if(flag) puts("YES");
		else puts("NO");
	}
	return 0;
}
