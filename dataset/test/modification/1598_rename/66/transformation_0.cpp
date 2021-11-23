#include<bits/stdc++.h>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<char> up;
    vector<char> down;
    for(int i = 0; i < n; i++){
        char x;
        cin >> x;
        /* cout << x << " "; */
        up.push_back(x);
    }
    for(int j = 0; j < n; j++){
        char y;
        cin >> y;
        /* cout << y << " "; */
        down.push_back(y);
    }

    int col = 2;
    int valid = 1;
    while(col < n && valid){
        if(up[col - 1] == '0' || down[col - 1] == '0'){
            col++;
        }
        else{
            valid = 0;
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

    if(valid){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
