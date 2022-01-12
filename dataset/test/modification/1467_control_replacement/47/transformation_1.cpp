#include <iomanip>
#include <iostream>
#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	int t;
    cin >> t;
    for ( ; t--; ) 
{
        int n;
        cin >> n;
        {
        int i = 0 ;
        for ( ; i <n; ) 
{
            if (i ==0){
                cout <<9;
                i ++; continue;
            }
            cout <<(7+i)%10;
        	i ++; 
        
        }}
        cout << endl;
    }
	return 0;
}