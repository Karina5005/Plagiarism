#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define inf 1e18
#define ff first
#define ss second
#define mod 1000000007




void solve(){

    int n,m;
    cin>>n>>m;

    
    vector<set<int>> v(n+1);
    for(int i=1;i<=m;i++)/* 'for' inside */
    {

        int x,y;
        cin>>x>>y;
        v[x].insert(y);
        v[y].insert(x);
    }

    
    vector<bool> good(n+1);
    int cnt=0;
    for(int i=1;i<=n;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(v[i].lower_bound(i)==v[i].end())/* 'if' inside */
        {
            cnt++;
            good[i]=true;
        }
    }

    
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        /* 'if' begin */
        if(t==3)/* 'if' inside */
        {
            cout<<cnt<<endl;
        }
        else{
            int x,y;
            cin>>x>>y;
            /* 'if' begin */
            if(good[x])
                /* 'if' inside */
                cnt--;
            /* 'if' begin */
            if(good[y])
                /* 'if' inside */
                cnt--;

            /* 'if' begin */
            if(t==1)/* 'if' inside */
            {
                v[x].insert(y);
                v[y].insert(x);
            }
            else{
                v[x].erase(y);
                v[y].erase(x);
            }

            /* 'if' begin */
            if(v[x].lower_bound(x)!=v[x].end())
                /* 'if' inside */
                good[x]=false;
            else 
                good[x]=true;

            /* 'if' begin */
            if(v[y].lower_bound(y)!=v[y].end())
                /* 'if' inside */
                good[y]=false;
            else 
                good[y]=true;


            /* 'if' begin */
            if(good[x])
                /* 'if' inside */
                cnt++;
            /* 'if' begin */
            if(good[y])
                /* 'if' inside */
                cnt++;
        }
    }

    return;
}  


int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;

}