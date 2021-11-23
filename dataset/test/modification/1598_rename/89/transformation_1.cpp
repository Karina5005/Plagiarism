#include<cstdio>
#include<iostream>
using namespace std;
class P
{
	public:
		int arr[5];
		void iev_mv()
		{
			for(int ky_fzo=0;ky_fzo<5;++ky_fzo)
			scanf("%d",&arr[ky_fzo]);
		}
};
void kxt(int keo)
{
	int ow,xev,vr_o,wew;
	P *r = new P[keo];
	for(int xwg_gpd=0;xwg_gpd<keo;++xwg_gpd)
	r[xwg_gpd].iev_mv();
	for(int msj=0;msj<4;++msj)
	for(int xq_yn=msj+1;xq_yn<5;++xq_yn)
	{
		    
		ow = 0;
		xev = 0;
		vr_o = 0;
		wew = 0;
		for(int ys_y=0;ys_y<keo;++ys_y)
		{
			if(r[ys_y].arr[msj] == 1 && r[ys_y].arr[xq_yn] == 0)
			++ow;
			if(r[ys_y].arr[xq_yn] == 1 && r[ys_y].arr[msj] == 0) 
			++xev;
			if(r[ys_y].arr[msj] == 1 && r[ys_y].arr[xq_yn] == 1)
			++vr_o;
			if(r[ys_y].arr[msj] == 0 && r[ys_y].arr[xq_yn] == 0)
			++wew;
		}
		if(!wew && ow<=keo/2 && xev<=keo/2)
		{
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
	delete []r;
}
int main()
{   
	int xk_r,o,s_wlz,nro_h;
	scanf("%d",&xk_r);
	while(xk_r--)
	{
		scanf("%d",&o);
		kxt(o);
	}
}
 		      	 			 		  		      	  	