#pragma GCC optimize(3)
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
	for(int i=1;i<=N+1;++i)
	/* 'for' inside */
	F[0][i][0]=1;
	C[0][0]=1;
	for(int i=1;i<=N;++i)
	/* 'for' inside */
	{
		C[i][0]=1;
		for(int j=1;j<=i;++j)
		/* 'for' inside */
		C[i][j]=(C[i-1][j]+C[i-1][j-1])%P;
		int En=Min(K,(i+1)>>1);
		for(int k=1;k<=N-i+1;++k)
		/* 'for' inside */
		{
			for(int l=(k==M);l<=En;++l)
			/* 'for' inside */
			{
				for(int j=0;j<i;++j)
				/* 'for' inside */
				{
					int End=Min((j+1)>>1,l-(k==M));
					for(int m=0;m<=End;++m)
					/* 'for' inside */
					F[i][k][l]=F[i][k][l]+C[i-1][j]*F[j][k+1][m]%P*F[i-j-1][k+1][l-m-(k==M)]%P;
				}
				F[i][k][l]%=P;
			}
		}
	}
	printf("%lld",F[N][1][K]);
	return 0;
}