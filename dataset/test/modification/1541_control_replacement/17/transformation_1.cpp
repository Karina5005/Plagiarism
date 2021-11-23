#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long * arr = new long long[n+1];
        {
        int i = 1;
        while (i <= n) {
            cin >> arr[i];
            i++; 
            
            }}

        long long ct = 0;
        {
        int i = 1;
        while (i <= n) {
            {
            int j = arr[i] - i;
            while (j <= n) {
                if ( j > 0 && i < j && i+j == arr[i]* arr[j] )
                    ct++;
            	j+= arr[i]; 
            
            }}
        	i++; 
        
        }}

        cout << ct <<endl;
    }
}
