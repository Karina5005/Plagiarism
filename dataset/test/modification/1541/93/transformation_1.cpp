#include<bits/stdc++.h>
#define int long long
#define Endl '\n'
#define endl '\n'
#define x first
#define y second
#define pi pair<int ,int>

using namespace std;

int a[100005];

signed main()
{
 	cout<<fixed<<setprecision(0);
 	ios::sync_with_stdio(false);
	cin.tie(0);	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			/* 'for' inside */
			cin>>a[i];
		int ans=0;
		for(int i=1;i<=n;i++)
		/* 'for' inside */
		{
			int times=1;
			while(1)
			{
				int next_id=a[i]*times-i;
				/* 'if' begin */
				if(next_id>n)
					/* 'if' inside */
					break;
				/* 'if' begin */
				if(next_id<=i)
				/* 'if' inside */
				{
					times++;
					continue;
				}
				/* 'if' begin */
				if(next_id+i==a[next_id]*a[i])
					/* 'if' inside */
					ans++;
				times++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}