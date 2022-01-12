#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int currMax;
        int currMin;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(i == 0){
                currMin = arr[0];
                currMax = arr[0];
                continue;
            }
            currMin = min(arr[i], currMin);
            currMax = max(arr[i], currMax);
        }

        cout<<currMax-currMin<<endl;
    }
}


// 3
// 6
// 3 4 2 4 1 2
// 3
// 1000 1002 998
// 2
// 12 11