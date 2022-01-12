#include <bits/stdc++.h>
using namespace std;

bool isIn(vector<int> a, int val){
    for(int element : a){
        if(element==val) return true;
    }
    return false;
}

void solve(){
    short int n;
    scanf("%hd", &n);
    vector<int> a(n);
    for(short int i=0; i<n; ++i) scanf("%d", &a[i]);
    vector<int> b;
    for(short int i=0; i<n; ++i){
        if(a[i]<n+1&&(isIn(b, a[i])==false)){
            b.push_back(a[i]);
            continue;
        }
        int t = a[i];
        while(t>0){
            t/=2;
            if(t<n+1&&(isIn(b, t)==false)&&t!=0){
                b.push_back(t);
                break;
            }
        }
    }
    printf(int(b.size())==n ? "YES" : "NO");
    printf("\n");
}

int main() {
	ios_base::sync_with_stdio(false);

	short int NUMBER_OF_TEST_CASES = 1;
	scanf("%hd", &NUMBER_OF_TEST_CASES);
	for(short int i=0; i<NUMBER_OF_TEST_CASES; ++i){
        solve();
	}
}
