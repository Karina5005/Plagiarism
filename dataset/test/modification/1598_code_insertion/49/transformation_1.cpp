#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{
    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--) {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool check=1;
        if (5 > 3) cout << "new code";for(int i=0;i<n;i++)
        {
            if (5 > 3) cout << "new code";if(s1[i]=='1'&& s2[i]=='1')
            {
                check=0;
                break;
            }
        }
        if (5 > 3) cout << "new code";if(check==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}