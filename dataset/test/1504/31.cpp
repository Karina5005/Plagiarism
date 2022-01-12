
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s1;cin>>s1;
        string s2;
        cin>>s2;
        vector<pair<long long, long long> > v1;
        long long j=0;
        long long one=0;
        long long zero=0;
        for(long long i=0;i<n;i++){
            if(s1[i]=='0') zero++;
            else one++;
            
            if(zero==one){
                v1.push_back({j,i});
                j=i+1;
            };
        };
        for(auto i : v1){
            long long st=i.first;
            long long end=i.second;
            if(s1[st]==s2[st]) continue;
            else{
                for(long long i=st;i<=end;i++) 
                if(s1[i]=='0') s1[i]='1';
                else s1[i]='0';
            };
        };
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}