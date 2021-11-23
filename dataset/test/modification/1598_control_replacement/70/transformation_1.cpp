#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int a[N][5];

int main(){
    int t;
    cin >> t;
    for ( ; t --; ) 
{
        int n;
        cin >> n;
        {
        int i = 0;
        for ( ; i < n; ) 
{
            {
            int j = 0;
            for ( ; j < 5; ) 
{
                cin >> a[i][j];
            	j ++; 
            
            }}}
        int k = 0;
        {
        int x = 0;
        for ( ; x < 5; ) 
{
            {
            int y = x + 1;
            for ( ; y < 5; ) 
{
                int ka = 0;
                int kb = 0;
                int kab = 0;
                {
                int i = 0;
                for ( ; i < n; ) 
{
                    if (!(a[i][x] == 1 && a[i][y] == 1)) {
                        if (a[i][x] == 1) {
                            ka += 1;
                        }
                        if (a[i][y] == 1) {
                            kb += 1;
                        }
                    } 
                    else {
                        kab += 1;
                    }
                	i++; 
                
                }}
                if (ka + kb + kab == n && ka + kab >= n / 2 && kb + kab >= n / 2) {
                    k = 1;
                }
            	y++; 
            
            }}
        	x++; 
        
        }}
        if(!(k == 1))cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}