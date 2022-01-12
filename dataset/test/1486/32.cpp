#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n+1];
        int f=0;
        long long sum = 0;
        for(int i=1;i<=n;i++) cin >> arr[i];
        for(int i=1;i<=n;i++){
            long long min_sum = ((i*(i-1))/2);
            sum += arr[i];
            if(sum < min_sum){
                f=1;
                break;
            }
        }
        if(f) cout << "NO\n";
        else cout << "YES\n";
    }
    
}