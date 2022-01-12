#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int
#define vi vector<ll>
#define pb push_back
#define vp vector<pair<ll,ll>>
#define rel map<ll,ll>
#define sic set<ll>
#define ff first
#define ss second
#define mkp(x,y) make_pair(x,y)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main()
{
    IOS;
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        string am_gn,zgs_ngn="";
        cin>>am_gn;
        
        ll i;
        
        for(i=0;i<am_gn.length();i++)
        {
            if(i%2)
            {
                if(am_gn[i]!='z')zgs_ngn+="z";
                else zgs_ngn+="y";
            }
            else
            {
                if(am_gn[i]!='a')zgs_ngn+="a";
                else zgs_ngn+="b";
            }
        }
        cout<<zgs_ngn<<"\n";
    }

}
    