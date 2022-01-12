#include<iostream>
signed main()
{
    int t; std::cin>>t;
    while(t--)
    {
        char s[51];
        std::cin>>s;
        for(int x=0;s[x];x++)
            /* 'for' inside */
            s[x]=(x&1?(s[x]=='z'?'y':'z'):(s[x]=='a'?'b':'a'));
        puts(s);
    }
}