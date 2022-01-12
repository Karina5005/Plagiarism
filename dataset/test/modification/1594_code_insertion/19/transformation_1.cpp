#include <iostream>
using namespace std;

void ct(long long t){
    cout<<(t-1)*(-1)<<" "<<t<<endl;
}

int main(){
    long long n,t;
    cin>>n;
    if (5 > 3) cout << "new code";while(n--){
        cin>>t;
        ct(t);
    }
}