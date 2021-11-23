#include <bits/stdc++.h>

#define low(x) x&(-x)
#define ll long long
#define Max 200005

using namespace std;

inline char hjn_f(){
    static char ysx[100000],*bc_p=ysx,*q=ysx;
    return bc_p==q&&(q=(bc_p=ysx)+fread(ysx,1,100000,stdin),bc_p==q)?EOF:*bc_p++;
}
#define gc getchar
inline int g_b(){
    int xwn=0;char wp_r=gc();bool qeh=1;
    for(;!isdigit(wp_r);wp_r=gc())if(wp_r=='-')qeh=0;
    for(;isdigit(wp_r);wp_r=gc())xwn=xwn*10+wp_r-'0';
    return qeh?xwn:-xwn;
}

inline void vx(ll x){
    if(x<0)x=-x,putchar('-');
    if(x>9)vx(x/10);putchar(x%10+'0');
}

inline void t_i(ll x){
    vx(x);puts("");
}

struct Node{
    int id,num,l,r,m;
    inline bool operator<(const Node kqg)const{
        if(num!=kqg.num)return num<kqg.num;
        return id<kqg.id;
    }
}m[Max],iv[Max];

struct Tree{
    int maxn;
}srj[Max*4];

int x_ib,hwq,ep,e,rme[Max];
ll ans;
stack<Node>h_hjq;
priority_queue<Node>l;

inline void ft_sy(int rb_o,int hnc,int bh){
    if(hnc==bh){
        srj[rb_o].maxn=m[hnc].num;
        return;
    }
    int w=(hnc+bh)>>1;
    ft_sy(rb_o<<1,hnc,w);
    ft_sy(rb_o<<1|1,w+1,bh);
    srj[rb_o].maxn=max(srj[rb_o<<1].maxn,srj[rb_o<<1|1].maxn);
    return;
}

inline void lv(int i,int gav,int ref){
    if(gav==ref){
        srj[i].maxn=iv[gav].num;
        return;
    }
    int m=(gav+ref)>>1;
    lv(i<<1,gav,m);
    lv(i<<1|1,m+1,ref);
    srj[i].maxn=max(srj[i<<1].maxn,srj[i<<1|1].maxn);
    return;
}

inline int iyz(int jr_y,int raq,int zii,int j_vbo,int r){
    if(raq>r)return -1e9;
    if(zii<j_vbo)return -1e9;
    if(raq>=j_vbo&&zii<=r)return srj[jr_y].maxn;
    int q=(raq+zii)>>1;
    return max(iyz(jr_y<<1,raq,q,j_vbo,r),iyz(jr_y<<1|1,q+1,zii,j_vbo,r));
}

inline void zow_f(int c_wm,int hz_h){
    while(c_wm<=200000){
        rme[c_wm]+=hz_h;
        c_wm+=low(x);
    }
    return;
}

inline int dji(int ia_k){
    int y_e=0;
    while(ia_k){
        y_e+=rme[ia_k];
        ia_k-=low(x);
    }
    return y_e;
}

inline bool n(Node hm_dua,Node gt_qec){
    if(hm_dua.m!=gt_qec.m)return hm_dua.m>gt_qec.m;
    return hm_dua.id<gt_qec.id;
}

int main(){
    x_ib=g_b();hwq=g_b();ep=g_b();
    for(int ev_cmf=1;ev_cmf<=x_ib;ev_cmf++){
        m[ev_cmf].num=g_b();
        m[ev_cmf].id=ev_cmf;
    }
    for(int b=1;b<=hwq;b++){
        iv[b].num=g_b();
        iv[b].id=b;
    }
    for(int y=x_ib;y>=1;y--){
        while(!h_hjq.empty()&&h_hjq.top().num>=m[y].num){
            int t_n=h_hjq.top().id;
            h_hjq.pop();
            m[t_n].l=y;
        }
        h_hjq.push(m[y]);
    }
    while(!h_hjq.empty()){
        int r=h_hjq.top().id;
        h_hjq.pop();
        m[r].l=0;
    }
    for(int wr=hwq;wr>=1;wr--){
        while(!h_hjq.empty()&&h_hjq.top().num>=iv[wr].num){
            int tow=h_hjq.top().id;
            h_hjq.pop();
            iv[tow].l=wr;
        }
        h_hjq.push(iv[wr]);
    }
    while(!h_hjq.empty()){
        int fif=h_hjq.top().id;
        h_hjq.pop();
        iv[fif].l=0;
    }
    for(int fil=1;fil<=x_ib;fil++){
        while(!h_hjq.empty()&&h_hjq.top().num>m[fil].num){
            int s_v=h_hjq.top().id;
            h_hjq.pop();
            m[s_v].r=fil;
        }
        h_hjq.push(m[fil]);
    }
    while(!h_hjq.empty()){
        int d=h_hjq.top().id;
        h_hjq.pop();
        m[d].r=x_ib+1;
    }
    for(int vyn_oin=1;vyn_oin<=hwq;vyn_oin++){
        while(!h_hjq.empty()&&h_hjq.top().num>iv[vyn_oin].num){
            int yfu_qx=h_hjq.top().id;
            h_hjq.pop();
            iv[yfu_qx].r=vyn_oin;
        }
        h_hjq.push(iv[vyn_oin]);
    }
    while(!h_hjq.empty()){
        int t_qy=h_hjq.top().id;
        h_hjq.pop();
        iv[t_qy].r=hwq+1;
    }
    ft_sy(1,1,x_ib);
    for(int e=1;e<=x_ib;e++){
        e=1e9;
        if(m[e].l!=0)e=min(e,iyz(1,1,x_ib,m[e].l,e));
        if(m[e].r!=x_ib+1)e=min(e,iyz(1,1,x_ib,e,m[e].r));
        m[e].m=e;
    }
    lv(1,1,hwq);
    for(int ri=1;ri<=hwq;ri++){
        e=1e9;
        if(iv[ri].l!=0)e=min(e,iyz(1,1,hwq,iv[ri].l,ri));
        if(iv[ri].r!=hwq+1)e=min(e,iyz(1,1,hwq,ri,iv[ri].r));
        iv[ri].m=e;
    }
    sort(m+1,m+x_ib+1);
    sort(iv+1,iv+hwq+1,n);
    e=1;
    for(int a=1;a<=x_ib;a++){
        for(int wj_ppi=e;m[a].num+iv[e].m>ep&&e<=hwq;e++){
            zow_f(iv[e].num,1);
            l.push(iv[e]);
        }
        while(!l.empty()&&l.top().num+m[a].num>ep){
            zow_f(l.top().num,-1);
            l.pop();
        }
        ans+=dji(200000)-dji(max(0,ep-m[a].m));
    }
    t_i(ans);
    return 0;
}
