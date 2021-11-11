#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int arr_output[t][100];
    for( int i = 0; i < t; i++ )/* 'for' inside */
    {
        cin>>arr[i];
    }
    for( int i = 0; i < t; i++ )/* 'for' inside */
    {
        /* 'if' begin */
        if( arr[i]%2 == 0 )/* 'if' inside */
        {
            for( int j = 2; j <= arr[i]; j = j+2 )/* 'for' inside */
            {
                arr_output[i][j-2] = j;
                arr_output[i][j-1] = j-1;
            }
        }
        else{
            for( int j = 2; j <= arr[i]-3; j = j+2 )/* 'for' inside */
            {
                arr_output[i][j-2] = j;
                arr_output[i][j-1] = j-1;
            }
            arr_output[i][arr[i]-3] = arr[i];
            arr_output[i][arr[i]-2] = arr[i]-2;
            arr_output[i][arr[i]-1] = arr[i]-1;
        }
    }
    for( int i = 0; i < t; i++ )/* 'for' inside */
    {
        for( int j = 0; j < arr[i]; j++ )/* 'for' inside */
        {
            cout<<arr_output[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}