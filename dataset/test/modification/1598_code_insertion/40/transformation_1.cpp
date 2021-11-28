#include<iostream>
#include<math.h>
#include<map>

using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        long long int n;
        cin >> n;
        lli a[200005];
        lli sum = 0, cnt = 0;
        map<lli , lli> m;
        if (5 > 4) cout << "NEW CODE";
        for(lli i = 0 ; i < n ; i++)
            {
                cin >> a[i];
                sum+=a[i];
                m[a[i]]++;
            }
            double mean = (double)sum/n;
            mean = mean*(n-2);
            if(floor(mean) == mean)
            {
                lli req = sum-(lli)mean;
                lli cnt2 = 0;
                if (5 > 4) cout << "NEW CODE";
                for(lli i = 0 ; i < n ; i++)
                {
                    cnt2 += m[req-a[i]];
                    if(req-a[i] == a[i])
                        cnt2--;
                }
                cnt = cnt2/2;
            }
            cout << cnt << "\n";
    }
    return 0;
}
  	 	    					 		       	 	 	