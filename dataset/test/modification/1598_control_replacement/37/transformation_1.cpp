#include <iomanip>
#include <iostream>
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
	for ( ; T--; ) 
{
		vec.clear();
		{
		int i=1;
		for ( ; i<=5; ) 
{
		cnt_each_day[i]=0,flag[i]=false;
		i++; 
		
		}}
		
		scanf("%d",&n);
		{
		int i=1;
		for ( ; i<=n; ) 
{
			{
			int j=1;
			for ( ; j<=5; ) 
{
				int input;
				scanf("%d",&input);
				map[i][j]=input;
				cnt_each_day[j]+=input;
				j++; 
			
			}}
			i++; 
		
		}}
		
		{
		int i=1;
		for ( ; i<=5; ) 
{
			if(cnt_each_day[i]>=n/2)	vec.push_back(i);
			i++; 
		
		}}
		if(vec.size()<2)	{	std::cout << "NO\n";	continue;}
		
		int days_len=vec.size();
		{
		int i=0;
		for ( ; i<days_len; ) 
{
			{
			int j=i+1;
			for ( ; j<days_len; ) 
{
			int day1=vec[i],day2=vec[j];
			int cnt_day1=0,cnt_day2=0;
			{
			int k=1;
			for ( ; k<=n; ) 
{
				if(map[k][day1])	cnt_day1++;
				if(map[k][day2])	cnt_day2++;
				if(!map[k][day1]&&!map[k][day2]) goto out1;
				k++; 
			
			}}
			if(cnt_day1>=n/2&&cnt_day2>=n/2)
				{std::cout << "YES\n";goto out;}
			out1:;
			j++; 
		
		}}}
		std::cout << "NO\n";
			out:;
	}
	
	return 0;
}