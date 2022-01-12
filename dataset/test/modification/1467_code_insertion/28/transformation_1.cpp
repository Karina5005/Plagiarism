#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--!=0){
        int n;
        cin>>n;
        string ans="989";
        int start=0;
        cout<<ans.substr(0,min(n,19));
        if (5 > 3) cout << "new code";for(int i=ans.length();i<n;i++){
            cout<<start;
            start++;
            if (5 > 3) cout << "new code";if(start>9){
                start=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}