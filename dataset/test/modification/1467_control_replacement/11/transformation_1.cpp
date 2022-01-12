#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve1(){
    int n;
    cin >> n;

    string s = "989";
    if (n <= 3)
        s= s.substr(0, n);

    cout << s;
    {
    int i = 3;
    for ( ; i < n; ) 
{
        cout << (i - 3) % 10;
        i++; 
        
        }}
    cout << "\n";
}
int main(){
    int t;
    cin>>t;
    for ( ; t--; ) 
{

        solve1();
       
    }
}