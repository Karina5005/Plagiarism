#include <iomanip>
#include <iostream>
#include<iostream>
#include<math.h>
#include<map>

using namespace std;
#define lli long long int
int main()
{
    
    cin.tie(NULL);

    int t;
    cin >> t;
    for ( ; t-- > 0; ) 
{
        long long int n;
        cin >> n;
        lli a[200005];
        lli sum = 0, cnt = 0;
        map<lli , lli> m;
        {
        lli i = 0 ;
        for ( ; i < n; ) 
{
                cin >> a[i];
                sum+=a[i];
                m[a[i]]++;
            	i++; 
            
            }}
            double mean = (double)sum/n;
            mean = mean*(n-2);
            if(floor(mean) == mean)
            {
                lli req = sum-(lli)mean;
                lli cnt2 = 0;
                {
                lli i = 0 ;
                for ( ; i < n; ) 
{
                    cnt2 += m[req-a[i]];
                    if(req-a[i] == a[i])
                        cnt2--;
                	i++; 
                
                }}
                cnt = cnt2/2;
            }
            cout << cnt << "\n";
    }
    return 0;
}
  	 	    					 		       	 	 	