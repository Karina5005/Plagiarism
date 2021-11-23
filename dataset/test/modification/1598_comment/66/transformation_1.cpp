#include<bits/stdc++.h>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<char> up;
    vector<char> down;
    for(int i = 0; i < n; i++)/* 'for' inside */
    {
        char x;
        cin >> x;
        
        up.push_back(x);
    }
    for(int j = 0; j < n; j++)/* 'for' inside */
    {
        char y;
        cin >> y;
        
        down.push_back(y);
    }

    int col = 2;
    int valid = 1;
    while(col < n && valid){
        /* 'if' begin */
        if(up[col - 1] == '0' || down[col - 1] == '0')/* 'if' inside */
        {
            col++;
        }
        else{
            valid = 0;
        }
    }

    

    /* 'if' begin */
    if(valid)/* 'if' inside */
    {
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
