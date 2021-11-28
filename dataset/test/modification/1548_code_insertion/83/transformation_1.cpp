#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,m;
    //int ans;
    cin>>n>>m;
    vector<int> bigfrnd(n+1,0);
    int ans=n;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int x=min(a,b);
        int y=max(a,b);

        if(bigfrnd[x]==0){
            ans--;
        }
        bigfrnd[x]++;
    }
    int t;
    cin>>t;
    while(t){
        int chc;
        cin>>chc;
        if(chc==1){
            int a,b;
            cin>>a>>b;
            int x=min(a,b);
            int y=max(a,b);
            
            if(bigfrnd[x]==0){
                ans--;
            }
            bigfrnd[x]++;
            
            
        }
        if(chc==2){
            int a,b;
            cin>>a>>b;
            int x=min(a,b);
            int y=max(a,b);

            bigfrnd[x]--;
            if(bigfrnd[x]==0){
                ans++;
            }

        }
        if(chc==3){
            cout<<ans<<endl;
        }
        t--;
    }
    return 0;
}