#include <bits/stdc++.h>
#define Start ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

using namespace std;
int main()
{
    Start;
    int t =1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        if(sz % 2){
            cout << "NO\n";
            continue;
        }

        string s1 = s.substr(0,sz / 2);
        string s2 = s.substr(sz / 2,sz / 2);
        cout << (s1 == s2 ? "YES\n" : "NO\n");
    }

}
