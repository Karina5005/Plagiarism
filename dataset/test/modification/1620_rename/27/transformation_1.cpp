#include <bits/stdc++.h>

#define ll  unsigned long long
#define ar array;
using namespace std;

const int utx = 1e3;

ll gcd(ll a, ll b)
{
    while (a > 0 && b > 0)
        if(a > b)
            a %= b;
        else    
            b %= a;
    return a + b;
}

void n()
{
    int ey = 0;
    string aop;
    cin >> aop;
    for(int e_i = 0; e_i < aop.length(); e_i++){
        if(aop[e_i] == 'N')
            ey+=1;
    }
    cout << (ey==1?"NO":"YES") << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int l;
    cin >> l;
    for(int u_g = 1; u_g <= l; u_g++)
        n();
}