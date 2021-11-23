#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int col;
        cin>>col;
        string arr[2];
        for(int i=0;i<2;i++)/* 'for' inside */
        {
            cin>>arr[i];
            
        }
        bool flag=0;
        for(int i=1;i<col;i++)/* 'for' inside */
        {
            
            /* 'if' begin */
            if (arr[0][i]=='1' &&arr[1][i]=='1')/* 'if' inside */
            {
                flag=1;
                break;
            }
            }
        /* 'if' begin */
        if (flag==1)/* 'if' inside */
        {
            cout<<"NO"<<"\n";
        }
        else{
        cout<<"YES"<<"\n";
        }
    }
    return 0;
}