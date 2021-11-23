#include<cstdio>
#define ll long long
#define Min(X,Y) (X>Y?Y:X)
using namespace std;
int Read()
{
	int Output=0;
	char Input=getchar();
	while(Input<'0'||Input>'9')
	Input=getchar();
	while(Input>='0'&&Input<='9')
	{
		Output=Output*10+Input-'0';
		Input=getchar();
	}
	return Output;
}
int N,M,K;
ll C[101][101];
ll F[101][102][101];
ll P;
int main()
{
	N=Read(),M=Read(),K=Read(),P=Read();
	{
	int i=1;
	while (i<=N+1) {
	F[0][i][0]=1;
	++i; 
	
	}}
	C[0][0]=1;
	{
	int i=1;
	while (i<=N) {
		C[i][0]=1;
		{
		int j=1;
		while (j<=i) {
		C[i][j]=(C[i-1][j]+C[i-1][j-1])%P;
		++j; 
		
		}}
		int En=Min(K,(i+1)>>1);
		{
		int k=1;
		while (k<=N-i+1) {
			{
			int l=(k==M);
			while (l<=En) {
				{
				int j=0;
				while (j<i) {
					int End=Min((j+1)>>1,l-(k==M));
					{
					int m=0;
					while (m<=End) {
					F[i][k][l]=F[i][k][l]+C[i-1][j]*F[j][k+1][m]%P*F[i-j-1][k+1][l-m-(k==M)]%P;
					++m; 
					
					}}
					++j; 
				
				}}
				F[i][k][l]%=P;
				++l; 
			
			}}
			++k; 
		
		}}
		++i; 
	
	}}
	printf("%lld",F[N][1][K]);
	return 0;
}