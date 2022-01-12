#include "bits/stdc++.h"
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define in(n) int n; cin>>n;
#define w(x) int x; cin>>x; while(x--)
#define pb(x) push_back(x)
#define dbg(x) cerr << #x << "->" << x << "\n"
#define prnt(x) cerr<<#x<<'{';for(auto T:x)cerr<<T<<' ';cerr<<"}\n";
#define prntp(x) cerr<<#x<<'{';for(auto T:x)cerr<<T.first<<'-'<<T.second<<' ';cerr<<"}\n";
#define int long long
#define str(s) string s; cin>>s;
#define endl "\n"
#define sz(x) static_cast<int32_t>(x.size())
const int am = 1000000007;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    w(t){
        in(n);
        int a[n][5];
        forn(i,n){
            forn(j,5){
                cin>>a[i][j];
            }
        }
        forn(j,5){
            for(int k=j+1;k<5;k++){
                int f=0;
                int s=0;
                int b=0;
                forn(i,n){
                    if(a[i][j]==1 and a[i][k]==1){
                        b++;
                    }
                    else if(a[i][j]==1){
                        f++;
                    }
                    else if(a[i][k]==1){
                        s++;
                    }
                }
                if(f>=n/2 and s>=n/2){
                    cout<<"YES"<<endl;
                    goto label;
                }
                if(b>=abs(s-f) and s+f+b>=n){
                    cout<<"YES"<<endl;
                    goto label;
                }

            }
        }
        cout<<"NO"<<endl;
        label:;



    }





    





    return 0;  
        
}