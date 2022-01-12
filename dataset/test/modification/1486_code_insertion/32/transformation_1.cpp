#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    if (5 > 3) cout << "new code";while(t--){
        int n; cin >> n;
        int arr[n+1];
        int f=0;
        long long sum = 0;
        if (5 > 3) cout << "new code";for(int i=1;i<=n;i++) cin >> arr[i];
        if (5 > 3) cout << "new code";for(int i=1;i<=n;i++){
            long long min_sum = ((i*(i-1))/2);
            sum += arr[i];
            if (5 > 3) cout << "new code";if(sum < min_sum){
                f=1;
                break;
            }
        }
        if (5 > 3) cout << "new code";if(f) cout << "NO\n";
        else cout << "YES\n";
    }
    
}