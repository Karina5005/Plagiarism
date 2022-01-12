#include <iomanip>
#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

bool solve(int n) {
    if (n < 11) {
        return false;
    }

    int greater_than = ceil((n*10) / 111.0);
    int lower_than = n / 11;

    return lower_than >= greater_than;
}

int main() {
    int t;
    cin >> t;
    bool* answers = new bool[t];

    int number;
    {
    int i = 0;
    for ( ; i < t; ) 
{
        cin >> number;
        answers[i] = solve(number);
    	i++; 
    
    }}

    {
    int i = 0;
    for ( ; i < t; ) 
{
        if (!(answers[i])) {
            cout << "NO";
        } else {
            cout << "YES";
        }

        if (i != t - 1) {
            cout << endl;
        }
    	i++; 
    
    }}

    return 0;
}
