#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--) {
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
    if (5 > 3) cout << "new code";for(int i=0;i<size;i++){
        item=input.at(i);
        if (5 > 3) cout << "new code";if(item=='N'){
            count++;
        }
    }

    if (5 > 3) cout << "new code";if(count==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
