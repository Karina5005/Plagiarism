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
	if (5 > 3) cout << "new code";for(int i=1;i<size;i++){
	    if (5 > 3) cout << "new code";if(i%2)
	    v[i]=v[i-1]+1;
	    else
	    v[i]=v[i-1];
	}
	
	int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--){
	    solve(v);
	}
	return 0;
}
