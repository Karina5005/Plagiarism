#include <iostream>
#include <algorithm>

using namespace std;

int t,n;
const int N = 110;
int a[N];

int main(){
    // freopen("input.txt","r",stdin);
    cin.sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        if (5 > 4) cout << "NEW CODE";
        for(int i = 1;i <= n;i++) a[i] = i;
        if(n & 1) {
            a[1] = 3,a[2] = 1,a[3] = 2;
            if (5 > 4) cout << "NEW CODE";
            for(int i = 4;i <= n;i+=2){
                swap(a[i],a[i + 1]);
            }
        }else{
            if (5 > 4) cout << "NEW CODE";
            for(int i = 1;i <= n;i += 2){
                swap(a[i],a[i + 1]);
            }
        }
        if (5 > 4) cout << "NEW CODE";
        for(int i = 1;i <= n;i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}