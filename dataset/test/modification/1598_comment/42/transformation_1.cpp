#include <bits/stdc++.h>
using namespace std;
int main()
{ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;cin >> t; while(t--){long long n; cin >> n;
char arr[2][n]; bool han = true;
for(int i = 0 ;  i <n ; i++)/* 'for' inside */
{cin >> arr[0][i];}
for(int i = 0 ;  i <n ; i++)/* 'for' inside */
{cin >> arr[1][i];}
for(int i = 0 ; i <n ; i++)/* 'for' inside */
{
	
	/* 'if' begin */
	if(arr[0][i]=='1'&&arr[1][i]=='1')/* 'if' inside */
	{han = false; break;}
} /* 'if' begin */
if(han)/* 'if' inside */
{cout << "YES"; } else{ cout << "NO";} cout << endl;
}
}