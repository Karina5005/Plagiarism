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
        {
        int i = 1;
        while (i <= n) {
        a[i] = i;
        i++; 
        
        }}
        if(!(n & 1)) {
            {
            int i = 1;
            while (i <= n) {
                swap(a[i],a[i + 1]);
            	i += 2; 
            
            }}
        }{
            a[1] = 3,a[2] = 1,a[3] = 2;
            {
            int i = 4;
            while (i <= n) {
                swap(a[i],a[i + 1]);
            	i+=2; 
            
            }}
        }
        {
        int i = 1;
        while (i <= n) {
        cout << a[i] << ' ';
        i++; 
        
        }}
        cout << endl;
    }
    return 0;
}