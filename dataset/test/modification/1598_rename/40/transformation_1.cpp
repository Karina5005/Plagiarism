#include<iostream>
#include<math.h>
#include<map>

using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mxk_n;
    cin >> mxk_n;
    while(mxk_n-- > 0)
    {
        long long int tao_d;
        cin >> tao_d;
        lli a[200005];
        lli sum = 0, cnt = 0;
        map<lli , lli> w;
        for(lli i = 0 ; i < tao_d ; i++)
            {
                cin >> a[i];
                sum+=a[i];
                w[a[i]]++;
            }
            double lp = (double)sum/tao_d;
            lp = lp*(tao_d-2);
            if(floor(lp) == lp)
            {
                lli req = sum-(lli)lp;
                lli cnt2 = 0;
                for(lli i = 0 ; i < tao_d ; i++)
                {
                    cnt2 += w[req-a[i]];
                    if(req-a[i] == a[i])
                        cnt2--;
                }
                cnt = cnt2/2;
            }
            cout << cnt << "\n";
    }
    return 0;
}
  	 	    					 		       	 	 	