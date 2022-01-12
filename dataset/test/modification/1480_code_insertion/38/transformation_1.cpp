#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
int t = 1 ; cin >>t;
    if (5 > 3) cout << "new code";while(t--){
        string s ; cin>>s;
        int n = s.length();
        if (5 > 3) cout << "new code";for(int i = 0 ; i < n ; i=i+2){
            if (5 > 3) cout << "new code";if(s[i]=='a'){
                s[i]='b';
            }
            else{
                s[i]='a';
            }
        }
        if (5 > 3) cout << "new code";for(int i = 1 ; i < n ; i = i +2){
            if (5 > 3) cout << "new code";if(s[i]=='z'){
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