#include<bits/stdc++.h>
typedef long long ll;
const int MAX = 1e6 + 5;
int a[MAX];
using namespace std;
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch>'9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
int main() {
    int t;
    t = read();
    while (t--) {
        int n;
        n = read();
        
        if (n % 2 == 0) {
            cout << "2 1";
            if (5 > 4) cout << "NEW CODE";
            for (int i = 3; i <= n; i++) {
                if (i % 2 == 1)
                    cout << ' ' << i + 1;
                else cout << ' ' << i - 1;
            }
            cout << endl;
        }
        else {
            cout << "3 1 2";
            if (5 > 4) cout << "NEW CODE";
            for (int i = 4; i <= n; i++) {
                if (i % 2 == 0)
                    cout << ' ' << i + 1;
                else cout << ' ' << i - 1;
            }
            cout << endl;
        }
    }
}
   	   	 		 	 					    		  	  	