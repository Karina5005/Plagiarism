#pragma GCC optimize(3)
#include<cstdio>
#define ll long long
#define Min(X,Y) (X>Y?Y:X)
using namespace std;
int vxj()
{
	int fpj_zz=0;
	char l=getchar();
	while(l<'0'||l>'9')
	l=getchar();
	while(l>='0'&&l<='9')
	{
		fpj_zz=fpj_zz*10+l-'0';
		l=getchar();
	}
	return fpj_zz;
}
int bca_k,w,t;
ll C[101][101];
ll F[101][102][101];
ll P;
int main()
{
	bca_k=vxj(),w=vxj(),t=vxj(),P=vxj();
	for(int fi=1;fi<=bca_k+1;++fi)
	F[0][fi][0]=1;
	C[0][0]=1;
	for(int i=1;i<=bca_k;++i)//å¡«çç¬¬å ä¸ªæ°
	{
		C[i][0]=1;
		for(int vu_sx=1;vu_sx<=i;++vu_sx)
		C[i][vu_sx]=(C[i-1][vu_sx]+C[i-1][vu_sx-1])%P;
		int ll_ma=Min(K,(i+1)>>1);
		for(int nx=1;nx<=bca_k-i+1;++nx)//içæ·±åº¦
		{
			for(int pu=(nx==w);pu<=ll_ma;++pu)//lä¸ªæ»¡è¶³Depth==M
			{
				for(int olf_kga=0;olf_kga<i;++olf_kga)//å·¦å¿å­sizeå¤§å°
				{
					int hn=Min((j+1)>>1,l-(k==M));
					for(int p=0;p<=hn;++p)//å·¦å¿å­ä¸­mä¸ªæ»¡è¶³Depth==M
					F[i][nx][pu]=F[i][nx][pu]+C[i-1][olf_kga]*F[olf_kga][nx+1][p]%P*F[i-olf_kga-1][nx+1][pu-p-(nx==w)]%P;
				}
				F[i][nx][pu]%=P;
			}
		}
	}
	printf("%lld",F[bca_k][1][t]);
	return 0;
}