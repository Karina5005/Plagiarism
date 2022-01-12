#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}

void solve() {
    string input;
    cin>>input;

    unsigned long long int size= input.size();
    char item{'0'};
    int count{0};
    {
    int i=0;
    while (i<size) {
        item=input.at(i);
        if(item=='N'){
            count++;
        }
    	i++; 
    
    }}

    if(count==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
