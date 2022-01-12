


#include <bits/stdc++.h>
using namespace std;

#define int int64_t
typedef pair<int,int> pii;
typedef vector<int> vi;

#define endl "\n"
#define aster(x) cerr<<#x<<" = "<<x<<endl;
#define abs(x) ((x < 0)?-(x):(x))
#define ii(x) (int)(x)

int const INF = 2e18;
int const mod = 1e9 +7;



void solve(){
	int n;cin>>n;
	int carry=0;
	string ans = "YES";
	for(int i=0; i<n; i++)/* 'for' inside */
	{
		int x;cin>>x;
		/* 'if' begin */
		if(x+carry <= i-1)/* 'if' inside */
		{
			ans = "NO";
		}else{
			carry += x-i;
		}
	}
	cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.precision(20);
    int test=1;
    cin >> test;
    for(int i=1;i<=test; i++)/* 'for' inside */
    {
        
        solve();
    }
    return 0;
}
