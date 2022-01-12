#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--!=0){
        int n;
        cin>>n;
        string ans="989";
        int start=0;
        cout<<ans.substr(0,min(n,19));
        for(int i=ans.length();i<n;i++)/* 'for' inside */
        {
            cout<<start;
            start++;
            /* 'if' begin */
            if(start>9)/* 'if' inside */
            {
                start=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}