#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;

	for (int j = 0; j < n; j++) /* 'for' inside */
	{
		int t;
		cin >> t;
		/* 'if' begin */
		if (t % 2 == 0) /* 'if' inside */
		{
			for (int i = 0; i < t / 2; i++) /* 'for' inside */
			{
				cout<<2*i + 2<<" "<<2*i + 1<<" ";
			}
			cout<<endl;
		 } else {
		 	/* 'if' begin */
		 	if (t == 1)/* 'if' inside */
		 	{
				cout<<1<<endl;
			}
			cout<< "3 1 2 ";

			for (int i = 2; i <= t/2; i++) /* 'for' inside */
			{
				cout<<2*i + 1<<" "<<2*i<<" ";
			}
			cout<<endl;
		 }
	}

	return 0;	
}
