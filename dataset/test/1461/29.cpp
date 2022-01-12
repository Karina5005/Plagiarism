#include <iostream>
#include <cstdio> 
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int n , k , t;
int main() {
	scanf("%d",&t);
	while ( t-- ) {
		scanf("%d%d",&n,&k);
		for ( int i = 1 ; i <= n ; ++i ) {
			if( i % 3 == 1 ) {
				printf("a");
			} else if ( i % 3 == 2 ) {
				printf("c");
			} else {
				printf("b");
			}
		}
		puts("");
	}
	return 0;
}
