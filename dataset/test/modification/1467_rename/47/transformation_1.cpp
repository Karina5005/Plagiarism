#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	int jt;
    cin >> jt;
    while (jt--) {
        int foq;
        cin >> foq;
        for (int cei_hnd = 0 ; cei_hnd <foq ; cei_hnd ++){
            if (cei_hnd ==0){
                cout <<9;
                continue;
            }
            cout <<(7+cei_hnd)%10;
        }
        cout << endl;
    }
	return 0;
}