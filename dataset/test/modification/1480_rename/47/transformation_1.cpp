#include<iostream>
signed main()
{
    int k_eyw; std::cin>>k_eyw;
    while(k_eyw--)
    {
        char y_jmf[51];
        std::cin>>y_jmf;
        for(int fs_r=0;y_jmf[fs_r];fs_r++)
            y_jmf[fs_r]=(fs_r&1?(y_jmf[fs_r]=='z'?'y':'z'):(y_jmf[fs_r]=='a'?'b':'a'));
        puts(y_jmf);
    }
}