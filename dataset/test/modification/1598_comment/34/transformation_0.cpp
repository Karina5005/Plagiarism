/*
Ø§ÙÙÙÙ Ø§ÙØµØ± Ø§ÙØ£ÙØµÙ ÙØ§ÙÙØ¯Ø³ ÙØ£ÙØ§ÙÙ ØºØ²Ø© ÙÙÙØ³Ø·ÙÙ
-Ø§ÙÙÙÙ Ø§Ø·ÙØ³ Ø¹ÙÙ Ø£Ø¹Ø¯Ø§Ø¡ Ø§ÙØ¯ÙÙ ÙØ§ÙÙØ¯ÙØ³ÙÙ-Ø§ÙÙÙÙØ¯ Ø§ÙÙØµÙØµ
Ø§ÙÙÙÙ Ø­Ø±Ø± ÙÙØ³Ø·ÙÙ ÙÙ ÙÙØ¯ Ø§ÙÙÙÙØ¯ ÙØ§Ø¬Ø¹Ù ÙÙØ¯ÙÙ ÙÙ ÙØ­ÙØ±ÙÙ
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f/*, sqr=320*/;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n;
ll sum;
map<int,int>mp;
vector<int>arr;
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--) {
        sum=0;
        cin >> n;
        arr.clear();
        arr.resize(n);
        mp.clear();
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sum *= 2;
        if (sum % n != 0) cout << 0 << endl;
        else {
            sum /= n;
            ll cnt = 0;
            for (int i = 0; i < n; i++) {
                cnt += mp[sum-arr[i]];
                mp[arr[i]]++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}

 	 		   	 	 		 	 	  	 		  		 	