#include<bits/stdc++.h>
using namespace std;

int main()
{	int t;
	cin>>t;
	while(t--)
	{	int i,n,j,a=1,b,c;
		cin>>n;
		vector<int> v(n+1);
		unordered_map<int,int> m;
		v[0]=0;
		for(i=1;i<=n;i++)
		{	cin>>v[i];
			if(v[i]<=n)
				m[v[i]]++;
		}

		for(i=1;i<=n;i++)
		{	if(m[v[i]]!=1)
			{	int temp=v[i];
				while(temp>0)
				{	temp/=2;
					if(temp<=n)
					{	if(m[temp]==0)
						{	m[temp]=1;
							m[v[i]]--;
							v[i]=temp;
							break;
						}
					}
				}
				if(temp==0)
				{	cout<<"NO\n";
					a=0;
					break;
				}
			}
		}
		if(a)
			cout<<"YES\n";
	}
}


