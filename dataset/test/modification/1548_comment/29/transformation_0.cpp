#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 2e5 + 100;
int n, m, q, big[MAXN], ans;

int main() {
    cin >> n >> m;
    for(int i=1, u, v; i<=m; i++) {
        scanf("%d%d", &u, &v);
        big[min(u, v)] ++;
        if(big[min(u, v)] == 1) ans ++;
    }
    scanf("%d", &q);
    int key;
    while(q --) {
        scanf("%d", &key);
        if(key == 1) {
            int x, y;
            scanf("%d%d", &x, &y);
            big[min(x, y)] ++;
            if(big[min(x, y)] == 1) ans ++;
        }
        if(key == 2) {
            int x, y;
            scanf("%d%d", &x, &y);
            big[min(x, y)] --;
            if(big[min(x, y)] == 0) ans --;
        }
        if(key == 3) {
            printf("%d\n", n-ans);
        }
    }
    return 0;
}
