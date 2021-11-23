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

void mkg_zfv();
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(nullptr);
	int cwv=1;
	cin>>cwv;
	while(cwv--)mkg_zfv();
	return 0;
}

const int m=0x3f3f3f3f;
const int e=998244353;
const int pl_az=2e5+5;

int ija_vv;
int qh[pl_az];

void solve()
{
    cin>>ija_vv;
    ll sum=0;
    for(re int i=1;i<=ija_vv;i++)
    {
        cin>>qh[i];
        sum+=qh[i];
    }
    if(sum*2%ija_vv)
    {
        cout<<"0"<<endl;
        return;
    }
    ll k=sum*2/ija_vv;
    ll da=0;
    sort(qh+1,qh+ija_vv+1);
    qh[0]=qh[ija_vv+1]=-1;
    int c_qbg=1,n_yu=ija_vv,dec,oi;
    while(qh[n_yu]>k)n_yu--;
    while(c_qbg<n_yu)
    {
        while(qh[c_qbg]+qh[n_yu]>k)n_yu--;
        while(qh[c_qbg]+qh[n_yu]<k)c_qbg++;
        if(c_qbg>=n_yu)break;
        if(qh[c_qbg]+qh[n_yu]!=k)continue;
        dec=oi=1;
        while(qh[c_qbg]==qh[c_qbg+1])oi++,c_qbg++;
        if(qh[c_qbg]!=qh[n_yu])
        while(qh[n_yu]==qh[n_yu-1])dec++,n_yu--;
        if(qh[c_qbg]==qh[n_yu])da+=(ll)oi*(oi-1)/2;
        else da+=(ll)oi*dec;
        c_qbg++,n_yu--;
    }
    cout<<da<<endl;
}