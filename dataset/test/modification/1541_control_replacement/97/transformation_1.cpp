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
   	{
   	int i=0;
   	while (i<n) {
   		int a;
   		cin>>a;
   		v.push_back({a,i+1});
   		i++; 
   	
   	}}
   	sort(v.begin(),v.end());
   	int count=0;
   	{
   	int i=0;
   	while (i<n-1) {
   		{
   		int j=i+1;
   		while (j<n) {
   			if(v[i].first*v[j].first==(v[i].second+v[j].second))
   			{
   				count++;
   			}
   			if(v[i].first*v[j].first>2*n)
   			{
   				break;
   			}
   			j++; 
   		
   		}}
   		i++; 
   	
   	}}
   	cout<<count<<endl;
   }
}  