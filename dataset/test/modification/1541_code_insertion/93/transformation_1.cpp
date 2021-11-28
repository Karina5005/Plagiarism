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
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int ans=0;
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
		{
			int times=1;//åæ°
			while(1)
			{
				int next_id=a[i]*times-i;
				if(next_id>n)//ä¸æ ä¸è½è¶è¿n
					break;
				if(next_id<=i)//ä¿è¯j>iï¼ä¸ç¶éå¤è®¡ç®
				{
					times++;
					continue;
				}
				if(next_id+i==a[next_id]*a[i])
					ans++;
				times++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}