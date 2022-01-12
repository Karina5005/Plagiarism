#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back
#define endl '\n'
#define MP make_pair
#define fi first
#define se second
using namespace std;
typedef long long int ll;

const ll va = 1e9 + 10;

int main(){
    int j;
    cin >> j;
    while(j--){
        int t;
        cin >> t;

        set<int> hf_q;
        for(int wye_en = 1; wye_en * wye_en  <= t; ++wye_en){
            hf_q.insert(wye_en * wye_en);
        }
        for(int d = 1; d * d * d <= t; ++d){
            hf_q.insert(d * d * d);
        }
        cout << hf_q.size() << endl;
    }
    return 0;
}
