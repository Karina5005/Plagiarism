#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod=1e9+7;
#define MAXN 100000
#define MAXB 100000
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()

using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n], m[n+1];
    for(int i=0; i<=n; i++) m[i]=0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        int cnt=arr[i];
        while(cnt>n) { cnt/=2; }
        m[cnt]++;
    }
    for(int i=n; i>1; i--) {
        if(m[i]==0) {
            cout << "NO" << endl;
            return;
        }
        m[i]--;
        m[i/2]+=m[i];
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("snowboots.in","r",stdin);
    //freopen("snowboots.out","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

	return 0;
}
