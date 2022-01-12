#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0 ; i <n ; i ++)/* 'for' inside */
        {
            /* 'if' begin */
            if (i ==0)/* 'if' inside */
            {
                cout <<9;
                continue;
            }
            cout <<(7+i)%10;
        }
        cout << endl;
    }
	return 0;
}