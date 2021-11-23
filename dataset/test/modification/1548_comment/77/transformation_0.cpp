#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, u, v, q, f, ans = 0;
    cin >> n >> m;
    vector<int> kill(n+1,0);
    while(m--){
        cin >> u >> v;
        if(u > v){swap(u,v);}
        if(kill[u] == 0){ans++;}
        kill[u]++;
    }
    cin >> q;
    while(q--){
        cin >> f;
        if(f == 1){
            cin >> u >> v;
            if(u > v){swap(u,v);}
            if(kill[u] == 0){ans++;}
            kill[u]++;
        }
        else if(f == 2){
            cin >> u >> v;
            if(u > v){swap(u,v);}
            kill[u]--;
            if(kill[u] == 0){ans--;}
        }
        else if(f == 3){
            cout << n - ans << "\n";
        }
    }
}