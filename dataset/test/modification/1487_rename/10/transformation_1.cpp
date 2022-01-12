#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define fo(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) cout<<x<<" "
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll e_y; cin>>e_y;
    while(e_y--)
    {
        ll qap_qyc; cin>>qap_qyc;
        ll vea=5;
        ll xh_wr=0;
        ll ae=2;
        ll jba_k=vea;
        while(jba_k<=qap_qyc)
        {
            xh_wr++;
            jba_k=jba_k+4*ae;
            ae=ae+1;
        }
        cout<<xh_wr<<endl;
    }
}
