/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>c;
        int temp1 = b - (c - b);
        if(temp1 % a == 0 && temp1 > 0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        
        temp1 = b + (b - a);
        
        if(temp1 % c == 0 &&  temp1 > 0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        
        temp1 = c - a;
        
        if(temp1 %2 == 0 && ((temp1/2) + a) % b == 0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }

    return 0;
}
