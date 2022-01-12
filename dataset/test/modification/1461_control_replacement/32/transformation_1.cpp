#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    for ( ; t--; ) 
{
        long long int n, k;
        cin >> n >> k;
        long long int no = n / 3;
        long long int rem = n % 3;
       for ( ; no--; ) 
{
           cout << "abc";
       }
       if(rem>0) {
           rem--;
           cout << "a";
       }
       if(rem>0) {
           rem--;
           cout << "b";
       }
       cout << endl;
    }
    return 0;
}