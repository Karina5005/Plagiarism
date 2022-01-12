#include <iomanip>
#include <iostream>
}#include <bits/stdc++.h>
#define ent "\n"

using namespace std;
typedef long long ll;

const int maxn = 2e3+100;
const ll INF = (1ll<<50) + 100;

int n;

void get(int n, int num){
    if(!(n > num)){
        cout << n;
        return;
    } else{
        get(n-num, num-1);
        cout << num;
    }
}

void rmain(){
    cin >> n;
    if(n > 45){
        cout << -1;
        return;
    }
    get(n, 9);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    {
    int i = 1;
    for ( ; i <= t; ) 
{
    rmain(), cout << ent;
    i++; 
    
    }
}