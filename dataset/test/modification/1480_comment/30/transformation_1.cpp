#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
void helper(){
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i<n;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(i%2==0)/* 'if' inside */
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
        else{
            /* 'if' begin */
            if(s[i]=='z')/* 'if' inside */
            {
                s[i]='y';
            }
            else{
                s[i]='z';
            }
        }
    }
    cout << s << endl;
}
int main() {
    fast_cin();
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}
