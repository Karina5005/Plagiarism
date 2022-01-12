#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long  long gj_b;
	    cin>>gj_b;

	    cout<<(long long)sqrt(gj_b)+(long long)cbrt(gj_b)-((long long)sqrt((long long)cbrt(gj_b)))<<endl;
	}
	return 0;
}
