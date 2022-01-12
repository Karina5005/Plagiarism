#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int vep_y, v_n, lu;
    cin >> vep_y;
    while (vep_y--) {
        cin >> v_n >> lu;
        for (int icw = 0; icw < v_n; icw++) {
            cout << (char){'a' + icw%3};
        }
        cout << "\n";
    }
}
