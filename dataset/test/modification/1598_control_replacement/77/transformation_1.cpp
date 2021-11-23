#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    
    cin.tie(NULL);
    int T;
    cin>>T;
    for ( ; T--; ) 
{
        int col;
        cin>>col;
        string arr[2];
        {
        int i=0;
        for ( ; i<2; ) 
{
            cin>>arr[i];
            // for(int j=0;j<col;j++){
            //     cout<<arr[i][j]<<typeid(arr[i][j]).name()<<"\n";
            // }
        	i++; 
        
        }}
        bool flag=0;
        {
        int i=1;
        for ( ; i<col; ) 
{
            //cout<<"here "<<arr[0][i]<<" "<<arr[1][i]<<"\n";
            if (arr[0][i]=='1' &&arr[1][i]=='1'){
                flag=1;
                break;
            }
            	i++; 
            
            }}
        if (!(flag==1)){
        cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}