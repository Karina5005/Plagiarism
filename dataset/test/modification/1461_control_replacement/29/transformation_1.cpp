#include <iomanip>
#include <iostream>
#include <iostream>
#include <cstdio> 
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int n , k , t;
int main() {
	scanf("%d",&t);
	for ( ; t--; ) 
{
		scanf("%d%d",&n,&k);
		{
		int i = 1 ;
		for ( ; i <= n; ) 
{
			if( i % 3 == 1 ) {
				std::cout << "a";
			} else if ( i % 3 == 2 ) {
				std::cout << "c";
			} else {
				std::cout << "b";
			}
			++i; 
		
		}}
		puts("");
	}
	return 0;
}
