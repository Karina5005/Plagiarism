#include <iomanip>
#include <iostream>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n;
    cin>>n;
    if(n==0){
        cout<<"-1 1\n";
        return;
    }
    cout<<(-n+1)<<" ";
    cout<<n<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    for ( ; t-->0; ) 
{
        solve();
    }
}