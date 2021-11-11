#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int a[N][5];

int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        for(int i = 0;i < n;i ++)
            /* 'for' inside */
            for(int j = 0;j < 5;j ++)/* 'for' inside */
            {
                cin >> a[i][j];
            }
        int k = 0;
        for (int x = 0; x < 5; x++) /* 'for' inside */
        {
            for (int y = x + 1; y < 5; y++) /* 'for' inside */
            {
                int ka = 0;
                int kb = 0;
                int kab = 0;
                for (int i = 0; i < n; i++) /* 'for' inside */
                {
                    /* 'if' begin */
                    if (a[i][x] == 1 && a[i][y] == 1) /* 'if' inside */
                    {
                        kab += 1;
                    } 
                    else {
                        /* 'if' begin */
                        if (a[i][x] == 1) /* 'if' inside */
                        {
                            ka += 1;
                        }
                        /* 'if' begin */
                        if (a[i][y] == 1) /* 'if' inside */
                        {
                            kb += 1;
                        }
                    }
                }
                /* 'if' begin */
                if (ka + kb + kab == n && ka + kab >= n / 2 && kb + kab >= n / 2) /* 'if' inside */
                {
                    k = 1;
                }
            }
        }
        /* 'if' begin */
        if(k == 1)/* 'if' inside */
        cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}