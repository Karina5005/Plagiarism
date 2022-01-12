#include <bits/stdc++.h>
#include <string>
#include <set>
#include <cmath>
#include<algorithm>

typedef long long  ll;
using namespace std;

bool hf_q(int wye_en)
{
    if(wye_en==0)
        return false;

    return (ceil(log2(wye_en)) == floor(log2(wye_en)));
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // your code goes here
    int d;
    cin>>d;
    while(d--)
    {
        ll lqq;
        cin>>lqq;
        cout<<-lqq+1<<" "<<lqq<<endl;
    }

    return 0;
}