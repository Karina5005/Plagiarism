#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;vector<int>v;int k;
for(int i=0;i<n;i++)
{cin>>k;v.push_back(k);}
sort(v.begin(),v.end());
cout<<v[n-1]-v[0]<<"\n";
 
 
}
 
    
    
    
}