#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	for ( ; t--; ) 
{
		int n;
		scanf("%d",&n);
		if (!(n==1)) {
			std::cout << "9";
			int tn=8;
			{
			int i=2;
			for ( ; i<=n; ) 
{
				std::cout << tn;
				if (tn==9) tn=0;
				else tn++;
				i++; 
			
			}}
			puts("");
		}
		else puts("9");
	}
	return 0;
}

	 	 	  				 					     	   	   	