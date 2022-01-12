#include <bits/stdc++.h>

using namespace std;
typedef long long l;

l t;
char str[100];

int main() {
    cin >> t;
    scanf("\n");
    {
    l k = 1;
    while (k <= t) {
        cin >> str;
        l sum = 0;
        {
        l i = 0;
        while (i < strlen(str)) {
            if (str[i] == 'N') {
                ++sum;
            }
        	++i; 
        
        }}
        if (!(sum == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    	++k; 
    
    }}
    return 0;
}
