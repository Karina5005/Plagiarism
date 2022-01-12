#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int b;
    int h=0;
    vector <int> o;
    for(int u=0;u<t;u++)/* 'for' inside */
    {
        cin>>b;
        int a[b];
        h=0;
        for(int i=0;i<b;i++)/* 'for' inside */
        {
            cin>>a[i];
            /* 'if' begin */
            if(i!=0 and a[i]==a[i-1])/* 'if' inside */
            {
                a[i]++;
                h++;
            }
            else /* 'if' begin */
            if(i!=0 and a[i]>a[i-1])/* 'if' inside */
            {
                h++;
            }
            else /* 'if' begin */
            if(i!=0 and a[i]<a[i-1])/* 'if' inside */
            {
                a[i]++;
            }
            else{
                h++;
            }
        }
        o.push_back(h);
    }
    for(int i=0;i<o.size();i++)/* 'for' inside */
    {
        cout<<o[i]<<"  ";
    }
}


