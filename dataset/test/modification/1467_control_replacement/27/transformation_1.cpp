#include <iomanip>
#include <iostream>
#include <cstdio>
int main() {
	int T;scanf("%d", &T);
	for ( ; T--; ) 
{
		int n;scanf("%d", &n);
		switch (n) {
			case 1: std::cout << "9";break;
			case 2: std::cout << "98";break;
			default: std::cout << "989";int t = 0;{
			int i = 4;
			for ( ; i <= n; ) 
{std::cout << t;t = (t + 1) % 10;	i++; 
			
			}}break;
		}
		std::cout << "\n";
	}
	return 0;
}
