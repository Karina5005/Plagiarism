#include <bits/stdc++.h>
#define Start ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

using namespace std;
int main()
{
    Start;
    int wj =1;
    cin >> wj;
    while(wj--)
    {
        string mbx;
        cin >> mbx;
        int f_ioa = mbx.size();
        if(f_ioa % 2){
            cout << "NO\n";
            continue;
        }

        string nv_i = mbx.substr(0,f_ioa / 2);
        string d_o = mbx.substr(f_ioa / 2,f_ioa / 2);
        cout << (nv_i == d_o ? "YES\n" : "NO\n");
    }

}
