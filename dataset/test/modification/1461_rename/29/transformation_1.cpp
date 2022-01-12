#include <iostream>
#include <cstdio> 
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int hcm_guu , cg , kjy_t;
int main() {
	scanf("%d",&kjy_t);
	while ( kjy_t-- ) {
		scanf("%d%d",&hcm_guu,&cg);
		for ( int b_ipv = 1 ; b_ipv <= hcm_guu ; ++b_ipv ) {
			if( b_ipv % 3 == 1 ) {
				printf("a");
			} else if ( b_ipv % 3 == 2 ) {
				printf("c");
			} else {
				printf("b");
			}
		}
		puts("");
	}
	return 0;
}
