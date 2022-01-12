#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll = long long;
using ld = long double;
ll mod=1e9+7;

void solveCP311()
{
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	int pre[n][m];
	int val[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			val[i][j]=0;
			if(arr[i][j]=='*') 
			{ 
				pre[i][j]=1;
				if(j) pre[i][j]+=pre[i][j-1]; 
			}
			else { pre[i][j]=0; } 
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='*')
			{
				int h=1;
				int l=j-1,r=j+1;
				int need=3;
				for(int x=i+1;x<n;x++)
				{
					if(l<0||r>=m) break;
					int val=pre[x][r];
					if(l) val-=pre[x][l-1];
					if(val!=need) break;
					else l--,r++,need+=2,h++;
				}
				ans+=h;
				val[i][j]=h;
			}
		}
	}
	cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    ll test=1;
    while(t--)
    {
        //cout<<"Case #"<<test<<": "; 
        test++;
        solveCP311();
	}
}