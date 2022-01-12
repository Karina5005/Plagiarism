#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define vi vector<long long>
#define pii pair<int,int>
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define mod 10000000007



int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vi v(n),arr(n+1,0);
        for(auto &x:v){
            cin>>x;
        }
        sort(all(v));
        for(auto x:v){
            while(x>0){
                if(x<=n)arr[x]++;
                x=x/2;
            }
        }
        int ans=1;
        for(int i=n;i>=1;i--){
            if(arr[i]==0){
                ans=0;
                break;
            }
            int temp=i;
            while(temp>0){
                arr[temp]--;
                temp/=2;
                
            }
        }
        if(ans==1)cout<<"YES\n";
        else cout<<"NO\n";



    }

return 0;

}