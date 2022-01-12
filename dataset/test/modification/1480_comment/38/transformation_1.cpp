#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
int t = 1 ; cin >>t;
    while(t--){
        string s ; cin>>s;
        int n = s.length();
        for(int i = 0 ; i < n ; i=i+2)/* 'for' inside */
        {
            /* 'if' begin */
            if(s[i]=='a')/* 'if' inside */
            {
                s[i]='b';
            }
            else{
                s[i]='a';
            }
        }
        for(int i = 1 ; i < n ; i = i +2)/* 'for' inside */
        {
            /* 'if' begin */
            if(s[i]=='z')/* 'if' inside */
            {
                s[i]='y';
            }
            else{
                s[i]='z';
            }
        }
        cout<<s<<endl;
}
    return 0 ;
}