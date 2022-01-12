#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],max1=0,min1=1e9+1;;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            max1=max(max1,a[i]);
            min1=min(min1,a[i]);
        }
        cout<<max1-min1<<"\n";
    }
    return 0;
}