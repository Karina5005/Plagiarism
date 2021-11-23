#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t, n, a, arr[101];
    int k = 0;
    cin >> t;
    {
    int i = 0;
    while (i < t) {
        cin >> n;
        if (n % 2 == 0) {
            {
            int j = 1;
            while (j <= n) {
                if (j % 2 == 0) {
                    arr[j-1] = j;
                }
                else {
                    arr[j+1] = j;
                }
            	j++; 
            
            }}
            {
            int j = 1;
            while (j <= n) {
                cout << arr[j] << " ";
            	j++; 
            
            }}
            cout << endl;
        }
        else {
            {
            int j = 1;
            while (j <= n) {
                if (j == n - 2) {
                    arr[j +1] = j;
                }
                else if (j == n - 1) {
                    arr[j +1] = j;
                }
                else if (j == n) {
                    arr[j - 2] = j;
                }
                else if (j % 2 == 0) {
                    arr[j - 1] = j;
                }
                else {
                    arr[j + 1] = j;
                }
            	j++; 
            
            }}
            {
            int j = 1;
            while (j <= n) {
                cout << arr[j] << " ";
            	j++; 
            
            }}
            cout << endl;
        }


    	i++; 
    
    }}
}