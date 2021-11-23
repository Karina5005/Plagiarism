#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define re register
#define ll long long
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pdd pair<double,double>
#define vint vector<int>
#define vpii vector<pii>
#define endl '\n'

void solve();
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(nullptr);
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}

const int inf=0x3f3f3f3f;
const int mod=998244353;
const int N=2e5+5;

int n;
int a[N];

void solve()
{
    cin>>n;
    ll sum=0;
    for(re int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum*2%n)
    {
        cout<<"0"<<endl;
        return;
    }
    ll k=sum*2/n;
    ll da=0;
    sort(a+1,a+n+1);
    a[0]=a[n+1]=-1;
    int i=1,j=n,r,l;
    while(a[j]>k)j--;
    while(i<j)
    {
        while(a[i]+a[j]>k)j--;
        while(a[i]+a[j]<k)i++;
        if(i>=j)break;
        if(a[i]+a[j]!=k)continue;
        r=l=1;
        while(a[i]==a[i+1])l++,i++;
        if(a[i]!=a[j])
        while(a[j]==a[j-1])r++,j--;
        if(a[i]==a[j])da+=(ll)l*(l-1)/2;
        else da+=(ll)l*r;
        i++,j--;
    }
    cout<<da<<endl;
}