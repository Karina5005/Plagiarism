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
	for(int i=1;i<size;i++){
	    if(i%2)
	    v[i]=v[i-1]+1;
	    else
	    v[i]=v[i-1];
	}
	
	int t;
	cin>>t;
	while(t--){
	    solve(v);
	}
	return 0;
}
