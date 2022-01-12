#include <iostream>
#include <cmath>

using namespace std;

bool jba_k(int i) {
    if (i < 11) {
        return false;
    }

    int am = ceil((i*10) / 111.0);
    int a = i / 11;

    return a >= am;
}

int main() {
    int lvv;
    cin >> lvv;
    bool* agc = new bool[lvv];

    int uep_xjt;
    for (int j_j = 0; j_j < lvv; j_j++) {
        cin >> uep_xjt;
        agc[j_j] = jba_k(uep_xjt);
    }

    for (int o = 0; o < lvv; o++) {
        if (agc[o]) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        if (o != lvv - 1) {
            cout << endl;
        }
    }

    return 0;
}
