#include <iostream>

using namespace std;

// 5 4 3 2 1    0 1 2 3 4 6
// 15 0 0 0 0   0 1 2 3 4 5

int main() {
    int nff, t_tay;
    long long int ilx;
    string ire_y;

    cin >> nff;

    while (nff--) {
        cin >> t_tay;

        int ai_q[t_tay];
        ilx = 0;
        ire_y = "YES";

        for (int re_zim = 0; re_zim < t_tay; re_zim++) {
            cin >> ai_q[re_zim];
            ilx += ai_q[re_zim] - re_zim;

            if (ilx < 0) {
                ire_y = "NO";
            }

            ai_q[re_zim] = re_zim;
        }

        cout << ire_y << endl;
    }

    return 0;
}
