#include <iostream>

using namespace std;

int main()
{
    int t, n, k = 0;
    bool flag;
    string a, b;
    cin >> t;
    while(k < t) {
        cin >> n;
        cin >> a >> b;
        int i = 1;
        flag = true;
        while(i < n - 2) {
            /* 'if' begin */
            if(a.at(i) == '1' && b.at(i) == '1') /* 'if' inside */
            {
                cout << "NO" << endl;
                break;
            }
            i++;
        }
        /* 'if' begin */
        if(i + 2 == n) /* 'if' inside */
        {
            /* 'if' begin */
            if(a.at(i) == '1' && b.at(i) == '1') /* 'if' inside */
            {
                cout << "NO" << endl;
            }
            else /* 'if' begin */
            if(b.at(i + 1) == '1') /* 'if' inside */
            {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        k++;
    }
    return 0;
}