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

    //creatting an adjacency list
    vector<set<int>> v(n+1);
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=m;i++){

        int x,y;
        cin>>x>>y;
        v[x].insert(y);
        v[y].insert(x);
    }

    //now we need to count the no of good nodes 
    vector<bool> good(n+1);
    int cnt=0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=n;i++){
        if(v[i].lower_bound(i)==v[i].end()){
            cnt++;
            good[i]=true;
        }
    }

    //no of queries
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==3){
            cout<<cnt<<endl;
        }
        else{
            int x,y;
            cin>>x>>y;
            if(good[x])
                cnt--;
            if(good[y])
                cnt--;

            if(t==1){
                v[x].insert(y);
                v[y].insert(x);
            }
            else{
                v[x].erase(y);
                v[y].erase(x);
            }

            if(v[x].lower_bound(x)!=v[x].end())
                good[x]=false;
            else 
                good[x]=true;

            if(v[y].lower_bound(y)!=v[y].end())
                good[y]=false;
            else 
                good[y]=true;


            if(good[x])
                cnt++;
            if(good[y])
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