#include <iostream>
#include <map>

using namespace std;

int main (void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    map <int, int> ans;

    cin >> t;

    while (t--){
        int n;
        long long sum = 0;
        long long combinations = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            ans[tmp]++;
            sum += tmp;
        }

        
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