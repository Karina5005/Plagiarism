#include<bits/stdc++.h>
using namespace std;

                        /*---Macros----*/
#define ll long long
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define nl "\n"
#define fix(f,n) std::fixed<<std::setprecision(n)<<f
#define YES cout<<"YES"<<nl
#define NO cout<<"NO"<<nl
#define all(v) v.begin(),v.end()
#define sz(s) (int)(s.size())
/*====================================Main Code===========================================*/
void j(vector<ll> zn_m){
    for(auto &w_n:zn_m){
        cout<<w_n<<" ";
    }
    cout<<nl;
}
void lx_rs(){
    string g;
    cin>>g;
    int w=count(all(s),'a');
    if(w==sz(s)){
        NO;
        return;
    }
    else{
        YES;
        string t=g;
        t.pb('a');
        string uu=t;
        reverse(all(s2));
        if(t==uu){
            cout<<"a"<<g<<nl;
        }
        else{
            cout<<t<<nl;
        }
    }
}
int main(){
    int aao_be;
    cin>>aao_be;
    while(aao_be--){
        lx_rs();
    }
}