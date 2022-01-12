#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t=0;
	cin >> t ;
	while (t--){
		long long n,digit=0 ;
		cin >> n ;
		/* 'if' begin */
		if (n==1)/* 'if' inside */
		{cout<<"9";}
		else /* 'if' begin */
		if (n==2)/* 'if' inside */
		{cout<<"98";}
		else{
			cout<<"989";
			n-=3;
			for (int i = 0; i < n; i++)
			/* 'for' inside */
			{
				cout << digit ;
				/* 'if' begin */
				if (digit<9)/* 'if' inside */
				{digit++;}
				else{digit=0;}
			}
		}
		cout << endl ;
	}
}