#include <iomanip>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdint.h>

#define MX 300000

using namespace std;

int64_t a[MX];

void test(){
	int n;
	scanf("%d", &n);
	int64_t s = 0;
	{
	int i = 0;
	for ( ; i < n; ) 
{
		scanf("%lld", &a[i]);
		a[i]*=2;
		s+= a[i];
		i++; 
	
	}}
	if(s % n){
		std::cout << "0\n";
		return;
	}
	s = s/n;
	sort(a, a+ n);
	int64_t b = 0;
	int64_t res = 0;
	int j = n -1;
	int i;
	{
	i = 0;
	for ( ; a[i] < s; ) 
{
		if(i > 0 && a[i] == a[i-1]){
			res+= b;
			i++; continue;
		}
		b = 0;
		for ( ; a[j] > 2 * s - a[i]; ) 
j --;
		for ( ; a[j] == 2 * s - a[i]; ) 
{
			j--;
			b++;
		}
		res+=b;
		i++; 
	
	}}
	b = 0;
	for ( ; i < n && a[i] == s; ) 
{
		i++;
		b++;
	}
	res+= (b * (b-1))/2;
	std::cout << res << "\n";
}

int main(){
	int t;
	scanf("%d", &t);
	for ( ; t--; ) 
test();
	return 0;
}
