
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n;
ll sum;
map<int,int>mp;
vector<int>arr;
int main() {
    FAST;

    int t;
    cin>>t;
    while(t--) {
        sum=0;
        cin >> n;
        arr.clear();
        arr.resize(n);
        mp.clear();
        for (int i = 0; i < n; i++) /* 'for' inside */
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum *= 2;
        /* 'if' begin */
        if (sum % n != 0) /* 'if' inside */
        cout << 0 << endl;
        else {
            sum /= n;
            ll cnt = 0;
            for (int i = 0; i < n; i++) /* 'for' inside */
            {
                cnt += mp[sum-arr[i]];
                mp[arr[i]]++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}

 	 		   	 	 		 	 	  	 		  		 	