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
        set<char>sc;
        string s;
        int l;
        cin>>s;
        l=s.size();
        for(int i=0; i<l; i++) /* 'for' inside */
        {
            sc.insert(s[i]);
        }
        /* 'if' begin */
        if(sc.size()==1&&s[0]=='a')
            pN;
        else {
            pY;
            string ss,sss;
            bool f1=false,f2=false;
            ss='a'+s;
            for(int i=0,j=l; i<=j; i++,j--) /* 'for' inside */
            {
                /* 'if' begin */
                if(ss[i]!=ss[j]) /* 'if' inside */
                {
                    f1=true;
                    break;
                }
            }
            sss=s+'a';
            for(int i=0,j=l; i<=j; i++,j--) /* 'for' inside */
            {
                /* 'if' begin */
                if(sss[i]!=sss[j]) /* 'if' inside */
                {
                    f2=true;
                    break;
                }
            }
            /* 'if' begin */
            if(f1)
                /* 'if' inside */
                cout<<ss<<endl;
            else
                cout<<sss<<endl;
        }
    }

    return 0;

}



