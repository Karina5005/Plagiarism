#include <iomanip>
#include <iostream>
#include <iostream>
#include <map>

using namespace std;

int main (void) {
    
    cin.tie(NULL);
    int t;
    map <int, int> ans;

    cin >> t;

    for ( ; t--; ) 
{
        int n;
        long long sum = 0;
        long long combinations = 0;
        cin >> n;
        {
        int i = 0;
        for ( ; i < n; ) 
{
            int tmp;
            cin >> tmp;
            ans[tmp]++;
            sum += tmp;
        	i++; 
        
        }}

        
        if((2 * sum) % n == 0) {
            sum = 2 * sum / n;

            for (auto e : ans){
                int a = e.first;
                int b = sum - a;
                if(ans.find(b) != ans.end()){
                    combinations += ((long long) ans[a] * ans[b]);
                }
            }
            if(ans.find(sum / 2) != ans.end() and !(sum % 2)){
                combinations -= ans[sum / 2];
            }
        }
        

        cout << combinations / 2 << endl;

        ans.clear();        
    }

    return 0;
}