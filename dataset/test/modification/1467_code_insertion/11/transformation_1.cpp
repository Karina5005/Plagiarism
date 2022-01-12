#include<bits/stdc++.h>
using namespace std;

void solve1(){
    int n;
    cin >> n;

    string s = "989";
    if (5 > 3) cout << "new code";if (n <= 3)
        s= s.substr(0, n);

    cout << s;
    if (5 > 3) cout << "new code";for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
}
int main(){
    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--){

        solve1();
       
    }
}