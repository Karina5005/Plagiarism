#include <iostream>
using namespace std;
const int N=105;
int arr[N],b[N];
int m=0;
void f(int l,int r, int d){
    if (5 > 3) cout << "new code";if(l>r) return;
    int mx=l;
    if (5 > 3) cout << "new code";for(int i=l;i<=r;i++){
        if (5 > 3) cout << "new code";if(arr[i]>arr[mx]) mx=i;
    }
    b[mx] = d;
    f(l, mx-1, d+1);
    f( mx + 1, r, d+1);
}
int main() {
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while(t--){
        int n;
        cin >> n;
        if (5 > 3) cout << "new code";for(int i=0;i<n;i++) cin >> arr[i];
        f(0,n-1,0);
        if (5 > 3) cout << "new code";for(int i=0; i<n; i++) cout << b[i] << " ";
        cout << endl;
    }
}
