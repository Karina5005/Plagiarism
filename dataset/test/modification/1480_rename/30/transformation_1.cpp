#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
void o(){
    string rjr;
    cin >> rjr;
    int z=rjr.size();
    for(int s_udi=0;s_udi<z;s_udi++){
        if(s_udi%2==0){
            if(rjr[s_udi]=='a'){
                rjr[s_udi]='b';
            }
            else{
                rjr[s_udi]='a';
            }
        }
        else{
            if(rjr[s_udi]=='z'){
                rjr[s_udi]='y';
            }
            else{
                rjr[s_udi]='z';
            }
        }
    }
    cout << rjr << endl;
}
int main() {
    fast_cin();
    ll tdx_v;
    cin>>tdx_v;
    while(tdx_v--){
        o();
    }
}
