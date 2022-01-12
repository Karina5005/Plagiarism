#include <iomanip>
#include <iostream>
#include <iostream>

using namespace std;

// 5 4 3 2 1    0 1 2 3 4 6
// 15 0 0 0 0   0 1 2 3 4 5

int main() {
    int t, n;
    long long int sum;
    string result;

    cin >> t;

    for ( ; t--; ) 
{
        cin >> n;

        int h[n];
        sum = 0;
        result = "YES";

        {
        int i = 0;
        for ( ; i < n; ) 
{
            cin >> h[i];
            sum += h[i] - i;

            if (sum < 0) {
                result = "NO";
            }

            h[i] = i;
        	i++; 
        
        }}

        cout << result << endl;
    }

    return 0;
}
