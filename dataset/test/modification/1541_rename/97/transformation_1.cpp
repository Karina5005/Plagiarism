#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	vector<pair<int,int>>r_y;
   	for(int i=0;i<n;i++)
   	{
   		int a;
   		cin>>a;
   		r_y.push_back({a,i+1});
   	}
   	sort(r_y.begin(),r_y.end());
   	int count=0;
   	for(int i=0;i<n-1;i++)
   	{
   		for(int j=i+1;j<n;j++)
   		{
   			if(r_y[i].first*r_y[j].first==(r_y[i].second+r_y[j].second))
   			{
   				count++;
   			}
   			if(r_y[i].first*r_y[j].first>2*n)
   			{
   				break;
   			}
   		}
   	}
   	cout<<count<<endl;
   }
}  