#include <iostream>
#include <algorithm>

using namespace std;

int t,n;
const int N = 110;
int a[N];

int main(){
    
    cin.sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1;i <= n;i++) /* 'for' inside */
        a[i] = i;
        /* 'if' begin */
        if(n & 1) /* 'if' inside */
        {
            a[1] = 3,a[2] = 1,a[3] = 2;
            for(int i = 4;i <= n;i+=2)/* 'for' inside */
            {
                swap(a[i],a[i + 1]);
            }
        }else{
            for(int i = 1;i <= n;i += 2)/* 'for' inside */
            {
                swap(a[i],a[i + 1]);
            }
        }
        for(int i = 1;i <= n;i++) /* 'for' inside */
        cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}