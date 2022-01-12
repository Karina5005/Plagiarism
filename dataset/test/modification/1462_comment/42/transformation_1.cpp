#include <bits/stdc++.h>
#define ent "\n"

using namespace std;
typedef long long ll;

const int maxn = 2e3+100;
const ll INF = (1ll<<50) + 100;

int n;

void get(int n, int num){
    /* 'if' begin */
    if(n > num)/* 'if' inside */
    {
        get(n-num, num-1);
        cout << num;
    } else{
        cout << n;
        return;
    }
}

void rmain(){
    cin >> n;
    /* 'if' begin */
    if(n > 45)/* 'if' inside */
    {
        cout << -1;
        return;
    }
    get(n, 9);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) /* 'for' inside */
    rmain(), cout << ent;
}