#include <bits/stdc++.h>

using namespace std;

void lo_ym();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int j = 1;
    cin >> j;
    while (j--) {
        lo_ym();
        cout << "\n";
    }
    return 0;
}

void solve() {
    string hc_q;
    cin>>hc_q;

    unsigned long long int rul_bd= hc_q.size();
    char be_b{'0'};
    int zo{0};
    for(int mr=0;mr<rul_bd;mr++){
        be_b=hc_q.at(mr);
        if(be_b=='N'){
            zo++;
        }
    }

    if(zo==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
