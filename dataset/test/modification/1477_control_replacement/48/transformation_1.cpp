#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
const int maxn=6007;
 
int n;
int x[maxn],y[maxn];
vector<int> perm;
signed main(){
    
    cin.tie(0), cout.tie(0);
    cin>>n;
    {
    int i=0;
    for ( ; i<n; ) 
{
    cin>>x[i]>>y[i];
    ++i; 
    
    }}
    {
    int i=0;
    for ( ; i<n; ) 
{
        perm.push_back(i);
        {
        int j=i;
        for ( ; j>1; ) 
{
            if (!(1ll*(x[perm[j]]-x[perm[j-1]])*(x[perm[j-1]]-x[perm[j-2]])+1ll*(y[perm[j]]-y[perm[j-1]])*(y[perm[j-1]]-y[perm[j-2]])>=0)){
                break;
            }
            else{
                swap(perm[j],perm[j-1]);
            }
        	--j; 
        
        }}
    	++i; 
    
    }}
    for (auto c:perm) cout<<c+1<<" ";
       
}