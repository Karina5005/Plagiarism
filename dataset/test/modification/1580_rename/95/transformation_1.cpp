#include<cstdio>
#define ll long long
#define Min(X,Y) (X>Y?Y:X)
using namespace std;
int da()
{
	int vzh_f=0;
	char wa_la=getchar();
	while(wa_la<'0'||wa_la>'9')
	wa_la=getchar();
	while(wa_la>='0'&&wa_la<='9')
	{
		vzh_f=vzh_f*10+wa_la-'0';
		wa_la=getchar();
	}
	return vzh_f;
}
int hou_m,b,pk_h;
ll C[101][101];
ll F[101][102][101];
ll P;
int main()
{
	hou_m=da(),b=da(),pk_h=da(),P=da();
	for(int aa_w=1;aa_w<=hou_m+1;++aa_w)
	F[0][aa_w][0]=1;
	C[0][0]=1;
	for(int zca_adj=1;zca_adj<=hou_m;++zca_adj)//å¡«çç¬¬å ä¸ªæ°
	{
		C[zca_adj][0]=1;
		for(int kv_jl=1;kv_jl<=zca_adj;++kv_jl)
		C[zca_adj][kv_jl]=(C[zca_adj-1][kv_jl]+C[zca_adj-1][kv_jl-1])%P;
		int bnl_im=Min(K,(i+1)>>1);
		for(int khy_z=1;khy_z<=hou_m-zca_adj+1;++khy_z)//içæ·±åº¦
		{
			for(int msq_kb=(khy_z==b);msq_kb<=bnl_im;++msq_kb)//lä¸ªæ»¡è¶³Depth==M
			{
				for(int xby_yph=0;xby_yph<zca_adj;++xby_yph)//å·¦å¿å­sizeå¤§å°
				{
					int rdf_bbr=Min((j+1)>>1,l-(k==M));
					for(int x=0;x<=rdf_bbr;++x)//å·¦å¿å­ä¸­mä¸ªæ»¡è¶³Depth==M
					F[zca_adj][khy_z][msq_kb]=F[zca_adj][khy_z][msq_kb]+C[zca_adj-1][xby_yph]*F[xby_yph][khy_z+1][x]%P*F[zca_adj-xby_yph-1][khy_z+1][msq_kb-x-(khy_z==b)]%P;
				}
				F[zca_adj][khy_z][msq_kb]%=P;
			}
		}
	}
	printf("%lld",F[hou_m][1][pk_h]);
	return 0;
}