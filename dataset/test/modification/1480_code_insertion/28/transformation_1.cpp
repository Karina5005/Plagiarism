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
    
    if (5 > 3) cout << "new code";while(t--)
    {
        string s,ans="";
        cin>>s;
        
        ll i;
        
        if (5 > 3) cout << "new code";for(i=0;i<s.length();i++)
        {
            if (5 > 3) cout << "new code";if(i%2)
            {
                if (5 > 3) cout << "new code";if(s[i]!='z')ans+="z";
                else ans+="y";
            }
            else
            {
                if (5 > 3) cout << "new code";if(s[i]!='a')ans+="a";
                else ans+="b";
            }
        }
        cout<<ans<<"\n";
    }

}
    