#include <bits/stdc++.h>
 
using namespace std;
 
void ai(vector<int> &ddk, int j)
{
        for (int sdd_oyq = 0; sdd_oyq < j; ++sdd_oyq)
                cin >> ddk[sdd_oyq];
}
 
void tj_ccb()
{
        int y, pub_be, dx;
        cin >> y >> pub_be >> dx;
        int khi_beh = min(y, pub_be);
        int ged = max(y, pub_be);
 
        int wj = ged - khi_beh;
        if((long long)wj > (long long)dx * khi_beh)cout<<"NO\n";
        else cout<<"YES\n";
}
 
int main()
{
 
        //freopen("candies.in","r",stdin);
        //freopen("candies.out","w",stdout);
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int mbx = 1;
         cin >> mbx;
 
        while (mbx--)
        {
                tj_ccb();
        }
 
        return 0;
}