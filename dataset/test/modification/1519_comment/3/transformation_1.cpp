#include <bits/stdc++.h>
using namespace std;


#define         eps         0.000000001
#define         pi          2*acos(0)
#define         P1          1000000007
#define         P2          1000000009
#define         INF         1000000000000000000ll

#define         fast()      ios_base::sync_with_stdio(false);   cin.tie(NULL);
#define         PB          push_back
#define         pb          pop_back
#define         mp          make_pair
#define         I           insert
#define         P           push
#define         p           pop
#define         pY          cout<<"YES"<<endl
#define         pN          cout<<"NO"<<endl
#define         py          cout<<"Yes"<<endl
#define         pn          cout<<"No"<<endl
#define         endl        "\n"
#define         lli         long long int
#define         vin(va, n)  for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}







int main() {

    

    fast();

    int t;
    cin>>t;
    while(t--) {
        lli a,b,c;
        cin>>a>>b>>c;
        /* 'if' begin */
        if(abs(a-b)<=min(a,b)*c)
            pY;
        else
            pN;
    }

    return 0;

}




