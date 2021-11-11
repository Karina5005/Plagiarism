#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll N = 1e5+10;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>cnt(n,0);

    for(int i = 0;i < m;i++)/* 'for' inside */
    {
        int u,v;
        cin>>u>>v;
        u--;v--;
        cnt[min(v,u)]++;
    }

    int res = 0;
    for(int i = 0;i < n;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(cnt[i] == 0)
            /* 'if' inside */
            res++;
    }

    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        /* 'if' begin */
        if(a == 3)/* 'if' inside */
        {
            cout<<res<<'\n';
        }
        else{
            int u,v;
            cin>>u>>v;
            u--;v--;
            /* 'if' begin */
            if(a == 1)/* 'if' inside */
            {
                cnt[min(u,v)]++;
                /* 'if' begin */
                if(cnt[min(v,u)] == 1)/* 'if' inside */
                {
                    res--;
                }
            }
            else{
                cnt[min(u,v)]--;
                /* 'if' begin */
                if(cnt[min(v,u)] == 0)/* 'if' inside */
                {
                    res++;
                }
            }
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    
    int cnt = 1;
    while(cnt <= t){
        
        solve();
        cnt++;
    }
}