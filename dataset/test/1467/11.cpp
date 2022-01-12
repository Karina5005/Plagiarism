#include<bits/stdc++.h>
using namespace std;

void solve1(){
    int n;
    cin >> n;

    string s = "989";
    if (n <= 3)
        s= s.substr(0, n);

    cout << s;
    for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){

        solve1();
       
    }
}