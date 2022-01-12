#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		/* 'if' begin */
		if (n==1) /* 'if' inside */
		puts("9");
		else {
			printf("9");
			int tn=8;
			for (int i=2;i<=n;i++) /* 'for' inside */
			{
				printf("%d",tn);
				/* 'if' begin */
				if (tn==9) /* 'if' inside */
				tn=0;
				else tn++;
			}
			puts("");
		}
	}
	return 0;
}

	 	 	  				 					     	   	   	