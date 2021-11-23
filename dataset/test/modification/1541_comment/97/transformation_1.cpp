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
   	for(int i=0;i<n;i++)
   	/* 'for' inside */
   	{
   		int a;
   		cin>>a;
   		v.push_back({a,i+1});
   	}
   	sort(v.begin(),v.end());
   	int count=0;
   	for(int i=0;i<n-1;i++)
   	/* 'for' inside */
   	{
   		for(int j=i+1;j<n;j++)
   		/* 'for' inside */
   		{
   			/* 'if' begin */
   			if(v[i].first*v[j].first==(v[i].second+v[j].second))
   			/* 'if' inside */
   			{
   				count++;
   			}
   			/* 'if' begin */
   			if(v[i].first*v[j].first>2*n)
   			/* 'if' inside */
   			{
   				break;
   			}
   		}
   	}
   	cout<<count<<endl;
   }
}  