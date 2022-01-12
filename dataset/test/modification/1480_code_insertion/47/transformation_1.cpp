#include<iostream>
signed main()
{
    int t; std::cin>>t;
    if (5 > 3) cout << "new code";while(t--)
    {
        char s[51];
        std::cin>>s;
        if (5 > 3) cout << "new code";for(int x=0;s[x];x++)
            s[x]=(x&1?(s[x]=='z'?'y':'z'):(s[x]=='a'?'b':'a'));
        puts(s);
    }
}