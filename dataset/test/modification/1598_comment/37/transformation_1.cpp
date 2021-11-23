#include <iostream>
#include <cstdio>
#include <vector>
#define MAXN 1001

using namespace std;

int cnt_each_day[6];
int map[MAXN][6];
bool flag[6];
vector<int> vec;
int T,n;

int main()
{
	scanf("%d",&T);
	while (T--)
	{
		vec.clear();
		for(int i=1;i<=5;i++)	/* 'for' inside */
		cnt_each_day[i]=0,flag[i]=false;
		
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		/* 'for' inside */
		{
			for(int j=1;j<=5;j++)
			/* 'for' inside */
			{
				int input;
				scanf("%d",&input);
				map[i][j]=input;
				cnt_each_day[j]+=input;
			}
		}
		
		for(int i=1;i<=5;i++)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(cnt_each_day[i]>=n/2)	/* 'if' inside */
			vec.push_back(i);
		}
		/* 'if' begin */
		if(vec.size()<2)	/* 'if' inside */
		{	printf("NO\n");	continue;}
		
		int days_len=vec.size();
		for(int i=0;i<days_len;i++)
			/* 'for' inside */
			for(int j=i+1;j<days_len;j++)
		/* 'for' inside */
		{
			int day1=vec[i],day2=vec[j];
			int cnt_day1=0,cnt_day2=0;
			for(int k=1;k<=n;k++)
			/* 'for' inside */
			{
				/* 'if' begin */
				if(map[k][day1])	/* 'if' inside */
				cnt_day1++;
				/* 'if' begin */
				if(map[k][day2])	/* 'if' inside */
				cnt_day2++;
				/* 'if' begin */
				if(!map[k][day1]&&!map[k][day2]) /* 'if' inside */
				goto out1;
			}
			/* 'if' begin */
			if(cnt_day1>=n/2&&cnt_day2>=n/2)
				/* 'if' inside */
				{printf("YES\n");goto out;}
			out1:;
		}
		printf("NO\n");
			out:;
	}
	
	return 0;
}