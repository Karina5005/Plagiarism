#include <bits/stdc++.h>
#define  sq(x) (x)*(x)
#define  cei(a,b) (long long)(((a)+(b)-1)/(b))
#define  mst(a,b) memset((a),b,sizeof((a)))
#define fi first
#define se second
#define pb push_back
#define chkmin(a,b) a=min(a,b)
#define chkmax(a,b) a=max(a,b)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int ku = 1e5+5;
//const int mod = 1e9+7 ;
//const int mod = 998244353 ;
const int eq = 0x3f3f3f3f;
//const ll inf=0x3f3f3f3f3f3f3f3f;
int bso_h[2*ku]= {0};
int lt_d;
void cd_ter()
{
	int pl_ozd,j_ai,ob,tai_av,lo_a,fr;
	scanf("%d%d",&pl_ozd,&j_ai);
	lt_d=pl_ozd;
	while(j_ai--) {
		scanf("%d%d",&ob,&tai_av);
		if(!bso_h[min(ob,tai_av)]++)lt_d--;
	}
	scanf("%d",&lo_a);
	while(lo_a--) {
		scanf("%d",&fr);
		if(fr==3)
			printf("%d\n",lt_d);
		else {
			scanf("%d%d",&ob,&tai_av);
			if(fr==1)
				if(!bso_h[min(ob,tai_av)]++)lt_d--;
				else ;
			else if(!--bso_h[min(ob,tai_av)])lt_d++;
		}
	}
}
int main()
{
//		freopen("D:\\desktop\\in.txt","r",stdin);
//		freopen("E:\\DATA\\in.txt","r",stdin);
	int csy=1;
//	scanf("%d",&T);
	for(int od=1; od<=csy; od++) {
//		printf("Case #%d: ",i);
		cd_ter();
	}
}
	  						   			 	 	    	   	  	