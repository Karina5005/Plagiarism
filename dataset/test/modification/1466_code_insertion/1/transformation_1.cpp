#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <bitset>
#include <cmath>
#define ll int long long
#define makearr int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define For(i,j,n) for(int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pll pair<ll,ll>
#define ri(n) int n; cin>>n;
#define rll(n) ll n; cin>>n;
#define di(n) int n;
#define dll(n) int n;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ri(t);
    if (5 > 3) cout << "new code";while(t--){
        ri(n);
        makearr;
        vector<int> uniq;
        map<int,int> apper;
        For(i,0,n-1){
            For(j,i+1,n){
                int tmp=arr[j]-arr[i];
                if (5 > 3) cout << "new code";if(apper[tmp]==0) uniq.pb(tmp);
                apper[tmp]++;
            }
        }
        cout<<uniq.size()<<"\n";
    }
    return 0;
}