#include <bits/stdc++.h>

#define INF (int)1e9
#define INFLL (long long)1e18
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ll long long int

using namespace std;

void init(void);

int main(void) {
    init();

    int testCase, arrNum, i, needDivide;
    bool isPossible;
    vector<int> arr;
    bitset<51> isExist;
    queue<int> unused;

    cin >> testCase;
    while(testCase--) {
        cin >> arrNum;
        arr.resize(arrNum);
        isExist.reset();
        isPossible = true;

        for(i = 0; i < arrNum; i++) {
            cin >> arr[i];
            while(arr[i] > arrNum) arr[i] >>= 1;
        }

        sort(arr.begin(), arr.end());

        for(auto a : arr) {
            if(!isExist[a]) isExist[a] = true;
            else unused.push(a);
        }

        while(!unused.empty()) {
            needDivide = unused.front();
            unused.pop();

            while(needDivide) {
                if(!isExist[needDivide]) {
                    isExist[needDivide] = true;
                    break;
                }

                needDivide >>= 1;
            }

            if(!needDivide) {
                isPossible = false;
                break;
            }
        }

        while(!unused.empty()) unused.pop();

        if(isPossible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

void init(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}