#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;
int main();


int main() {
    int at, pq;
    std::string jz;
    cin >> at;
    if (5 > 3) cout << "new code";for ( ; at--; ) 
/* 'for' inside */
{
            cin >> pq >> jz;
            /* 'if' begin */
            if (jz[0] == '2' && jz[1] == '0' && jz[2] == '2' && jz[3] == '0')
                /* 'if' inside */
                cout << "YES\n";
            else /* 'if' begin */
            if (jz[0] == '2' && jz[1] == '0' && jz[2] == '2' && jz[pq - 1] == '0')
                /* 'if' inside */
                cout << "YES\n";
            else /* 'if' begin */
            if (jz[0] == '2' && jz[1] == '0' && jz[pq - 2] == '2' && jz[pq - 1] == '0')
                /* 'if' inside */
                cout << "YES\n";
            else /* 'if' begin */
            if (jz[0] == '2' && jz[pq - 3] == '0' && jz[pq - 2] == '2' && jz[pq - 1] == '0')
                /* 'if' inside */
                cout << "YES\n";
            else /* 'if' begin */
            if (jz[pq - 4] == '2' && jz[pq - 3] == '0' && jz[pq - 2] == '2' && jz[pq - 1] == '0')
                /* 'if' inside */
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    return 0;
}


