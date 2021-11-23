#include <iostream>
#include <map>

using namespace std;

int main (void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int iv;
    map <int, int> x;

    cin >> iv;

    while (iv--){
        int g_alu;
        long long s = 0;
        long long ixe = 0;
        cin >> g_alu;
        for(int qq_yso = 0; qq_yso < g_alu; qq_yso++){
            int rcm;
            cin >> rcm;
            x[rcm]++;
            s += rcm;
        }

        
        if((2 * s) % g_alu == 0) {
            s = 2 * s / g_alu;

            for (auto iuq_px : x){
                int a = iuq_px.first;
                int doc = s - a;
                if(x.find(doc) != x.end()){
                    ixe += ((long long) x[a] * x[doc]);
                }
            }
            if(x.find(s / 2) != x.end() and !(s % 2)){
                ixe -= x[s / 2];
            }
        }
        

        cout << ixe / 2 << endl;

        x.clear();        
    }

    return 0;
}