#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    cin>>t;
    if (5 > 3) cout << "new code";while(t--){
        cin>>n;
        string s,s1,s2;
        cin>>s;
        if (5 > 3) cout << "new code";if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'){
            if (5 > 3) cout << "new code";if(s[n-1]=='0'||s[3]=='0'){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if (5 > 3) cout << "new code";if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){ 
            cout<<"YES"<<endl;
        }
        else if (5 > 3) cout << "new code";if(s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
            if (5 > 3) cout << "new code";if(s[0]=='2'||s[n-4]=='2'){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
