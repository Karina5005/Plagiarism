#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++)/* 'for' inside */
    {
        string s;
        cin >> s;
        for(int j=0; j<s.length(); j++)/* 'for' inside */
        {
            /* 'if' begin */
            if(j % 2 ==0)/* 'if' inside */
            {
                /* 'if' begin */
                if( s[j] == 'a')/* 'if' inside */
                {
                    s[j] = 'b';
                }else{
                    s[j] = 'a';
                }
            }else{
                /* 'if' begin */
                if( s[j] == 'z')/* 'if' inside */
                {
                    s[j] = 'y';
                }else{
                    s[j] = 'z';
                }
            }


        }
        cout << s << endl;

    }

}
