#include<bits/stdc++.h>
const int N = 500;
int T, n, m, s[2][N][N], f[N], ans;
#define cal(t, x1, y1, x2, y2) (s[t][x2][y2] - s[t][x2][y1-1] - s[t][x1-1][y2] + s[t][x1-1][y1-1])

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &n, &m);
        int tmp;
        memset(s, 0, sizeof(s));
        ans = 0x3f3f3f3f;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                scanf("%1d", &tmp);
                ++s[tmp][i][j];
                s[0][i][j] += s[0][i-1][j] + s[0][i][j-1] - s[0][i-1][j-1];
                s[1][i][j] += s[1][i-1][j] + s[1][i][j-1] - s[1][i-1][j-1];
            }
        }
        for(int xa = 1; xa <= n; ++xa){
            for(int xb = xa+4; xb <= n; ++xb){
                memset(f, 0x3f, sizeof(0x3f));
                for(int y = 1; y <= m; ++y){
                    f[y] = f[y-1] + cal(0, xa, y-1, xa, y-1) + cal(0, xb, y-1, xb, y-1) + cal(1, xa+1, y-1, xb-1, y-1);
                    if(y >= 4) f[y] = std::min(f[y], cal(0, xa+1, y-3, xb-1, y-3) + cal(0, xa, y-2, xa, y-1) + cal(0, xb, y-2, xb, y-1) + cal(1, xa+1, y-2, xb-1, y-1));
                    ans = std::min(ans, f[y] + cal(0, xa+1, y, xb-1, y));
                }
            }
        }
        printf("%d\n", ans);
    }

}