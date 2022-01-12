#include <bits/stdc++.h>
#define ll long long int
#define pb(n) push_back(n);
#define loop(i,a,b) for(ll i = a;i<b;i++)
#define nl cout << endl;
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define f first
#define s second
using namespace std;



void solve(){
    int n,q;    cin >> n >> q;
    int arr[n];
    int ct = 0;
    for(int &i: arr){
        cin >> i;
        ct += i;
    }
    
    while(q--){
        int t,x;    cin >> t >> x;

        if(t == 1){
            if(arr[x-1])    ct--;
            else    ct++;
            arr[x-1] = 1 - arr[x-1];
        }else{
            if(x <= ct) cout << "1";
            else    cout << "0";
        }

        nl
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    solve();


}