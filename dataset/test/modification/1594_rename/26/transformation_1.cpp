#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define ll long long
#define pb push_back

void zgs_ngn(){
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
    int fnc_h = 1;
    cin>>fnc_h;
    while(fnc_h-->0){
        zgs_ngn();
    }
}