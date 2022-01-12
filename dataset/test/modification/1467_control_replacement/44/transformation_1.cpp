#include <iomanip>
#include <iostream>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <numeric>
#include <map>
#include <iomanip>
#include <string>
 
using namespace std;
 
#define ln "\n"
 
#define vt vector
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
 
#define MOD 1e9+7
 
int arr[100100];
 
int main() 
{
     
    cin.tie(NULL); 

    int t;
    cin >> t;
    for ( ; t--; ) 
{
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << 9;
            break;
        
        case 2:
            cout << 98;
            break;

        case 3:
            cout << 989;
            break;

        default:
            cout << 989;
            int t = 0;
            {
            int i = 0;
            for ( ; i < n - 3; ) 
{
                cout << t;
                t++;
                if (t > 9) t = 0;
            	i++; 
            
            }}
            break;
        }
        cout << ln;
    }
} 