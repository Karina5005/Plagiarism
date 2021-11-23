#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<char> up;
    vector<char> down;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        char x;
        cin >> x;
        /* cout << x << " "; */
        up.push_back(x);
    	i++; 
    
    }}
    {
    int j = 0;
    for ( ; j < n; ) 
{
        char y;
        cin >> y;
        /* cout << y << " "; */
        down.push_back(y);
    	j++; 
    
    }}

    int col = 2;
    int valid = 1;
    for ( ; col < n && valid; ) 
{
        if(!(up[col - 1] == '0' || down[col - 1] == '0')){
            valid = 0;
        }
        else{
            col++;
        }
    }

    /* cout << n; */
    /* for(int x : up){ */
        /* cout << x; */
    /* } */
    /* cout << " "; */
    /* for(int x : down){ */
        /* cout << x; */
    /* } */
    /* while(n--){ */
    /*     cout << up[n] << down[n] << " "; */
    /* } */

    if(!(valid)){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
}

int main(){

    
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int t;
    cin >> t;
    for ( ; t--; ) 
solve();

    return 0;
}
