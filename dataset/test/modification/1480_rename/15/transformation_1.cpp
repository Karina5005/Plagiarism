#include<bits/stdc++.h>
using namespace std;
long long gol,va;
int main()
{
	string j;
	cin>>gol;
	while(gol--)
	{
		cin>>j;
		for(va=0;va<j.size();va++)
		{
			if(va%2==0)
			{
				if(j[va]!='a') j[va]='a';
				else j[va]='b';
			}
			else
			{
				if(j[va]!='z') j[va]='z';
				else j[va]='y';
			}
		}
		cout<<j<<"\n";
	}
}
// #begnazar_cpp

