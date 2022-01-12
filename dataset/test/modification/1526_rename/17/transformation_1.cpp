#include<bits/stdc++.h>
using namespace std;

int main()
{
    int o;
    cin>>o;
    for(int wji_wne=0;wji_wne<o;wji_wne++)
    {
        int gym;
        cin>>gym;
        if(gym/11>=(gym%11)*10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
