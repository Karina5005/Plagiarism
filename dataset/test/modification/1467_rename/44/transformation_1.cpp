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
 
int zd_ckh[100100];
 
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int tvq;
    cin >> tvq;
    while (tvq--)
    {
        int d_mk;
        cin >> d_mk;
        switch (d_mk)
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
            int e = 0;
            for (int t_rf = 0; t_rf < d_mk - 3; t_rf++)
            {
                cout << e;
                e++;
                if (e > 9) e = 0;
            }
            break;
        }
        cout << ln;
    }
} 