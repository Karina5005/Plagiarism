#include <bits/stdc++.h>
using namespace std;
int v_n,lu;
int main() {
    cin>>v_n;
    while(v_n--){
        cin>>lu;
        string icw,v,oe;
        cin>>icw;
        if(icw[0]=='2'&&icw[1]=='0'&&icw[2]=='2'){
            if(icw[lu-1]=='0'||icw[3]=='0'){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(icw[0]=='2'&&icw[1]=='0'&&icw[lu-2]=='2'&&icw[lu-1]=='0'){ 
            cout<<"YES"<<endl;
        }
        else if(icw[lu-3]=='0'&&icw[lu-2]=='2'&&icw[lu-1]=='0'){
            if(icw[0]=='2'||icw[lu-4]=='2'){
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
