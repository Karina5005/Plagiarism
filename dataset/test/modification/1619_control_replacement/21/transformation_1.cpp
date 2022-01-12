#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	for ( ; t--; ) 
{
	    long  long n;
	    cin>>n;

	    cout<<(long long)sqrt(n)+(long long)cbrt(n)-((long long)sqrt((long long)cbrt(n)))<<endl;
	}
	return 0;
}
