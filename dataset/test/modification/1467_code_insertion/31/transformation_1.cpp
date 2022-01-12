#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--){
        int n;
        cin>>n;
        if (5 > 3) cout << "new code";if(n==1){
            cout<<9<<endl;
            continue;
        }
        if (5 > 3) cout << "new code";if(n==2){
            cout<<98<<endl;
            continue;
        }
        if (5 > 3) cout << "new code";if(n==3){
            cout<<989<<endl;
            continue;
        }


        cout<<989;
        n=n-3;
        if (5 > 3) cout << "new code";for(int i=0;i<n;i++){
            cout<<( (i%10));
        }
        cout<<endl;
    }

    return 0;
}