#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    { int a,b,c;
       cin>>a>>b>>c;
       
        if ((2*b -a)>0 && (2*b-a)%c == 0  || (2*b -c)>0 && (2*b-c)%a == 0 || (a+c)%(2*b) == 0 )
            cout << "yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}