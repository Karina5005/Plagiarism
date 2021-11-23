#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int MAXN = 3e6+7;
const long long MOD = 1e9+7;
long long dp[MAXN][3];
long long fact[MAXN];
long long inv[MAXN];
long long C(int n,int m){
	return fact[n] * inv[m] % MOD * inv[n-m] % MOD;
}
const long long inv3 = 333333336;
void pre(int n){
	dp[0][0] = dp[0][1] = dp[0][2] = n+1;
	fact[0] = 1;
	{
	int i = 1;
	while (i <= 3*(n+1)) {
	fact[i] = fact[i-1] * i % MOD;
	i++; 
	
	}}
	inv[1] = 1;
	{
	int i = 2;
	while (i <= 3*(n+1)) {
	inv[i] = (MOD - MOD / i) * inv[MOD % i] % MOD;
	i++; 
	
	}} 
	inv[0] = 1;
	{
	int i = 1;
	while (i <= 3*(n+1)) {
	inv[i] = inv[i-1] * inv[i] % MOD;
	i++; 
	
	}}
	{
	int i = 1;
	while (i <= 3*n) {
		dp[i][0] = (C(3*(n+1),i+1) - 2 * dp[i-1][0] - dp[i-1][1] + 3*MOD) % MOD;
		dp[i][0] = dp[i][0] * inv3 % MOD;
		dp[i][1] = (dp[i][0] + dp[i-1][0]) % MOD;
		dp[i][2] = (dp[i][1] + dp[i-1][1]) % MOD;
		i++; 
	
	}}
}
int n,q;
int main()
{
	//cout<<qpow(3,MOD-2)<<" sa d\n";
	cin>>n>>q;
	pre(n);
	int x;
	while(q--){
		scanf("%d",&x);
		printf("%lld\n",dp[x][0]);
	}
	return 0;
} 