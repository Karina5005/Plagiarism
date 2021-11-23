#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int arr_output[t][100];
    {
    int i = 0;
    while (i < t) {
        cin>>arr[i];
    	i++; 
    
    }}
    {
    int i = 0;
    while (i < t) {
        if( !(arr[i]%2 == 0) ){
            {
            int j = 2;
            while (j <= arr[i]-3) {
                arr_output[i][j-2] = j;
                arr_output[i][j-1] = j-1;
            	j = j+2; 
            
            }}
            arr_output[i][arr[i]-3] = arr[i];
            arr_output[i][arr[i]-2] = arr[i]-2;
            arr_output[i][arr[i]-1] = arr[i]-1;
        }
        else{
            {
            int j = 2;
            while (j <= arr[i]) {
                arr_output[i][j-2] = j;
                arr_output[i][j-1] = j-1;
            	j = j+2; 
            
            }}
        }
    	i++; 
    
    }}
    {
    int i = 0;
    while (i < t) {
        {
        int j = 0;
        while (j < arr[i]) {
            cout<<arr_output[i][j]<<" ";
        	j++; 
        
        }}
        cout<<endl;
    	i++; 
    
    }}
    return 0;
}