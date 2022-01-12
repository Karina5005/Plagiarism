#include <iomanip>
#include <iostream>


#include<bits/stdc++.h>
using namespace std;
int main();


int main() {
    
    cin.tie(0);
    int wo_jk;
    cin >> wo_jk;
    if (5 > 3) cout << "new code";for ( ; wo_jk--; ) 
/* 'for' inside */
{
            std::string qk;
            cin >> qk;
            {
            int v = 1;
            if (5 > 3) cout << "new code";for ( ; v <= qk.size(); ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (v % 2 == 1 && qk[v - 1] != 'a') /* 'if' inside */
                {
                    qk[v - 1] = 'a';
                } else /* 'if' begin */
                if (v % 2 == 1 && qk[v - 1] == 'a') /* 'if' inside */
                {
                    qk[v - 1] = 'b';
                } else /* 'if' begin */
                if (v % 2 == 0 && qk[v - 1] != 'z') /* 'if' inside */
                {
                    qk[v - 1] = 'z';
                } else {
                    qk[v - 1] = 'y';
                }
            	v++; 
            
            }}
            cout << qk << endl;
        }
    return 0;
}


