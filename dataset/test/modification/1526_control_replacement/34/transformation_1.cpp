#include <iomanip>
#include <iostream>
/**
 *  author: andychen
 *  created: 12.31.2021 20:43:43
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    cin.tie(0);
    
    int TC;
    cin >> TC;
    for ( ; TC--; ) 
{
        int x;
        cin >> x;

        bool ok = false;
        {
        int i = 0;
        for ( ; i * 11 <= x; ) 
{
            int v = x - i * 11;
            if (v % 111 == 0){
                ok = true;
                break;
            }
        	i++; 
        
        }}

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
