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
		for ( int i = 1 ; i <= n ; ++i ) /* 'for' inside */
		{
			/* 'if' begin */
			if( i % 3 == 1 ) /* 'if' inside */
			{
				printf("a");
			} else /* 'if' begin */
			if ( i % 3 == 2 ) /* 'if' inside */
			{
				printf("c");
			} else {
				printf("b");
			}
		}
		puts("");
	}
	return 0;
}
