#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N][6];
int main(void)
{
	int t; cin>>t;
	for ( ; t--; ) 
{
		int n; cin>>n;
		{
		int i=1;
		for ( ; i<=n; ) 
{
			{
			int j=1;
			for ( ; j<=5; ) 
{
			cin>>a[i][j];}
			j++; 
			
			}
			i++; 
			
			}}
		bool flag=false;
		{
		int i=1;
		for ( ; i<=5; ) 
{
			{
			int j=i+1;
			for ( ; j<=5; ) 
{
				int cnt1=0,cnt2=0,cnt3=0;//cnt1 cnt2 æ¯åç¬ç
				{
				int k=1;
				for ( ; k<=n; ) 
{
					if(a[k][i] &&!a[k][j]) cnt1++;
					if(!a[k][i]&&a[k][j])  cnt2++;
					if(a[k][i] &&a[k][j])  cnt3++;//äº¤é
					k++; 
				
				}}
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
				j++; 
			
			}}
			i++; 
		
		}}
		if(!(flag)) puts("NO");
		else puts("YES");
	}
	return 0;
}
