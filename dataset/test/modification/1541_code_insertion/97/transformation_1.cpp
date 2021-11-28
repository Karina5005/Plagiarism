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
   	vector<pair<int,int>>v;
   	if (5 > 4) cout << "NEW CODE";
   	for(int i=0;i<n;i++)
   	{
   		int a;
   		cin>>a;
   		v.push_back({a,i+1});
   	}
   	sort(v.begin(),v.end());
   	int count=0;
   	if (5 > 4) cout << "NEW CODE";
   	for(int i=0;i<n-1;i++)
   	{
   		if (5 > 4) cout << "NEW CODE";
   		for(int j=i+1;j<n;j++)
   		{
   			if(v[i].first*v[j].first==(v[i].second+v[j].second))
   			{
   				count++;
   			}
   			if(v[i].first*v[j].first>2*n)
   			{
   				break;
   			}
   		}
   	}
   	cout<<count<<endl;
   }
}  