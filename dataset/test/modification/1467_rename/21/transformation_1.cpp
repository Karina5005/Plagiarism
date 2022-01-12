#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int kzz_za;
	scanf("%d",&kzz_za);
	while (kzz_za--) {
		int za_c;
		scanf("%d",&za_c);
		if (za_c==1) puts("9");
		else {
			printf("9");
			int ew_tgu=8;
			for (int rx=2;rx<=za_c;rx++) {
				printf("%d",ew_tgu);
				if (ew_tgu==9) ew_tgu=0;
				else ew_tgu++;
			}
			puts("");
		}
	}
	return 0;
}

	 	 	  				 					     	   	   	