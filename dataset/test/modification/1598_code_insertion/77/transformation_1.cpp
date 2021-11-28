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
        if (5 > 4) cout << "NEW CODE";
        for(int i=0;i<2;i++){
            cin>>arr[i];
            // for(int j=0;j<col;j++){
            //     cout<<arr[i][j]<<typeid(arr[i][j]).name()<<"\n";
            // }
        }
        bool flag=0;
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<col;i++){
            //cout<<"here "<<arr[0][i]<<" "<<arr[1][i]<<"\n";
            if (arr[0][i]=='1' &&arr[1][i]=='1'){
                flag=1;
                break;
            }
            }
        if (flag==1){
            cout<<"NO"<<"\n";
        }
        else{
        cout<<"YES"<<"\n";
        }
    }
    return 0;
}