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
		for(int i=1;i<=5;i++)	cnt_each_day[i]=0,flag[i]=false;
		
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=5;j++)
			{
				int input;
				scanf("%d",&input);
				map[i][j]=input;
				cnt_each_day[j]+=input;
			}
		}
		
		for(int i=1;i<=5;i++)
		{
			if(cnt_each_day[i]>=n/2)	vec.push_back(i);
		}
		if(vec.size()<2)	{	printf("NO\n");	continue;}
		
		int days_len=vec.size();
		for(int i=0;i<days_len;i++)
			for(int j=i+1;j<days_len;j++)
		{
			int day1=vec[i],day2=vec[j];
			int cnt_day1=0,cnt_day2=0;
			for(int k=1;k<=n;k++)
			{
				if(map[k][day1])	cnt_day1++;
				if(map[k][day2])	cnt_day2++;
				if(!map[k][day1]&&!map[k][day2]) goto out1;
			}
			if(cnt_day1>=n/2&&cnt_day2>=n/2)
				{printf("YES\n");goto out;}
			out1:;
		}
		printf("NO\n");
			out:;
	}
	
	return 0;
}