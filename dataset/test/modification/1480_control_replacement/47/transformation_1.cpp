#include <iomanip>
#include <iostream>
#include<iostream>
signed main()
{
    int t; std::cin>>t;
    for ( ; t--; ) 
{
        char s[51];
        std::cin>>s;
        {
        int x=0;
        for ( ; s[x]; ) 
{
            s[x]=(x&1?(s[x]=='z'?'y':'z'):(s[x]=='a'?'b':'a'));
            x++; 
            
            }}
        puts(s);
    }
}