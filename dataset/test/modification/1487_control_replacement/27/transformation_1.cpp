#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&v){
    int n;
    cin>>n;
    int val=2*n-1;
    val=(int)sqrt(val);
    
    cout<<v[val]-1<<endl;
}

int main() {
	// your code goes here
	int size=1e5+10;
	vector<int>v(size,0);
	{
	int i=1;
	for ( ; i<size; ) 
{
	    if(!(i%2))
	    v[i]=v[i-1];
	    else
	    v[i]=v[i-1]+1;
		i++; 
	
	}}
	
	int t;
	cin>>t;
	for ( ; t--; ) 
{
	    solve(v);
	}
	return 0;
}
