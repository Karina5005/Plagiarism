#include<bits/stdc++.h>
using namespace std;

                        
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

void Print(vector<ll> v){
    for(auto &pr:v){
        cout<<pr<<" ";
    }
    cout<<nl;
}
void solve(){
    string s;
    cin>>s;
    int c=count(all(s),'a');
    /* 'if' begin */
    if(c==sz(s))/* 'if' inside */
    {
        NO;
        return;
    }
    else{
        YES;
        string s1=s;
        s1.pb('a');
        string s2=s1;
        reverse(all(s2));
        /* 'if' begin */
        if(s1==s2)/* 'if' inside */
        {
            cout<<"a"<<s<<nl;
        }
        else{
            cout<<s1<<nl;
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}