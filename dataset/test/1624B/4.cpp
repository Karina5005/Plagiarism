#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define logarr(a) for (auto i : a) cout << i << " "; cout << endl;
#define getarr(a) for (int i = 0; i < a.size(); i++) cin >> a[i];
const int INF = 1e9+7;

struct fastIO {
    fastIO() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        cout << fixed << setprecision(12);
    }
} fio;

template <typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

void test_case()
{
    int a, b, c;
    cin>>a>>b>>c;
    int d=a-b;
    if (d>0)
    {
        if ((b-d)%c==0&&(b-d)/c>0)
        {
            cout << "YES\n";
            return;
        }
    }
    else
    {
        if ((b+abs(d))%c==0&&(b+abs(d))/c>0)
        {
            cout << "YES\n";
            return;
        }
    }
    d=b-c;
    if (d>0)
    {
        if ((b+abs(d))%a==0&&(b+abs(d))/a>0)
        {
            cout << "YES\n";
            return;
        }
    }
    else
    {
        if((b-abs(d))%a==0 && ((b-abs(d))/a)>0)
        {
            cout<<"YES\n";
            return;
        }
    }
    d=(a-c)/2;
    if((a-c)%2)
    {
        cout<<"NO\n";
        return;
    }
    if(d>0)
    {
        if ((a-d)%b==0&&(a-d)/b>0)
        {
            cout<<"YES\n";
            return;
        }
    }
    else
    {
        if ((a+abs(d))%b==0&&(a+abs(d))/b>0)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main()
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        test_case();
    }

    return 0;
}
