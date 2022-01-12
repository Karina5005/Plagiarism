#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		if (n==1) puts("9");
		else {
			printf("9");
			int tn=8;
			for (int i=2;i<=n;i++) {
				printf("%d",tn);
				if (tn==9) tn=0;
				else tn++;
			}
			puts("");
		}
	}
	return 0;
}

	 	 	  				 					     	   	   	