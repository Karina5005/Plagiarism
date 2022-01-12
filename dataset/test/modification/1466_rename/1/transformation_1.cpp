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
    while(t--){
        ri(n);
        makearr;
        vector<int> oom;
        map<int,int> l_oz;
        For(i,0,n-1){
            For(j,i+1,n){
                int l=arr[j]-arr[i];
                if(l_oz[l]==0) oom.pb(l);
                l_oz[l]++;
            }
        }
        cout<<oom.size()<<"\n";
    }
    return 0;
}