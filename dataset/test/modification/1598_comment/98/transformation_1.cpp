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
			/* 'for' inside */
			for(int j=1;j<=5;j++) /* 'for' inside */
			cin>>a[i][j];
		bool flag=false;
		for(int i=1;i<=5;i++)
		/* 'for' inside */
		{
			for(int j=i+1;j<=5;j++)
			/* 'for' inside */
			{
				int cnt1=0,cnt2=0,cnt3=0;
				for(int k=1;k<=n;k++)
				/* 'for' inside */
				{
					/* 'if' begin */
					if(a[k][i] &&!a[k][j]) /* 'if' inside */
					cnt1++;
					/* 'if' begin */
					if(!a[k][i]&&a[k][j])  /* 'if' inside */
					cnt2++;
					/* 'if' begin */
					if(a[k][i] &&a[k][j])  /* 'if' inside */
					cnt3++;
				}
				/* 'if' begin */
				if(cnt1+cnt2+cnt3==n)
				/* 'if' inside */
				{
				    /* 'if' begin */
				    if(cnt1>cnt2)
				    /* 'if' inside */
				    {
					    int temp=cnt1-cnt2;
					    /* 'if' begin */
					    if(cnt3>=temp&& (cnt3-temp) %2==0 && (cnt1 || cnt2 || cnt3 ) ) /* 'if' inside */
					    flag=1;
				    }
				    else /* 'if' begin */
				    if(cnt1==cnt2)
				    /* 'if' inside */
				    {
					    /* 'if' begin */
					    if( cnt3%2==0&& (cnt1|| cnt2 ||cnt3) ) /* 'if' inside */
					    flag=1;
				    }
				    else 
				    {
					    int temp=cnt2-cnt1;
					    /* 'if' begin */
					    if(cnt3>=temp && (cnt3-temp)%2==0 && (cnt1 ||cnt2 ||cnt3)) /* 'if' inside */
					    flag=1;
				    }
				}
			}
		}
		/* 'if' begin */
		if(flag) /* 'if' inside */
		puts("YES");
		else puts("NO");
	}
	return 0;
}
