#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    for ( ; t--; ) 
{
        cin >> n;
        int temp;
        if (n == 1)
            cout << "9" << endl;
        else if (n == 2)
            cout << "98" << endl;
        else
        {
            cout<<"989";
            n=n-3;
            temp=0;
            for ( ; n--; ) 
{
                cout << temp;
                temp++;
                if (temp == 10)
                    temp = 0;
            }
        }

        cout << endl;
    }
}