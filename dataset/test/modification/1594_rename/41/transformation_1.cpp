#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long j = 1e9 + 7;

long long sdd_oyq(long long tj_ccb, long long y){
    if(y == 0){
        return 1;
    }
    long long pub_be = sdd_oyq(tj_ccb, y/2);
    if(y % 2 == 0){
        return (pub_be * pub_be) % j;
    }
    else{
        int dx = (pub_be * pub_be) % j;
        dx = (dx * tj_ccb) % j;
        return dx;
    }
}

int main(){
	ll khi_beh;
	cin>>khi_beh;
	ll ged = pow(2,khi_beh) - 2;
	ll wj = sdd_oyq(4LL,ged);
	wj = (wj * 6LL) % j;
	cout<<wj<<endl;

	return 0;
}