#include <iomanip>
#include <iostream>
/*
	Author: Karan Mandal
*/

#include <bits/stdc++.h>

using namespace std;
int a[200000];

int main() {
    
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for ( ; T-- > 0; ) 
{
        int n;
        cin >> n;

        long long s = 0;
        map<int, int> fmap;

        {
        int i = 0;
        for ( ; i < n; ) 
{
            cin >> a[i];
            s += a[i];

            fmap[a[i]] += 1;
        	i++; 
        
        }}

        if ((2 * s) % n != 0) {
            cout << 0 << "\n";
            continue;
        }

        long long r = (s * 2) / n;
        s = 0;
        {
        int i = 0;
        for ( ; i < n; ) 
{
            int a1 = a[i], a2 = r - a[i];

            if (fmap.count(a2))
                s += fmap[a2];

            if (a1 == a2)
                s -= 1;
        	i++; 
        
        }}

        cout << (s / 2) << "\n";
    }

    return 0;
}