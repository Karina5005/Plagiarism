#include <bits/stdc++.h>

#define low(x) x&(-x)
#define ll long long
#define Max 200005

using namespace std;

inline char gc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
#define gc getchar
inline int read(){
    int x=0;char ch=gc();bool positive=1;
    while (!isdigit(ch)) {
    if(ch=='-')positive=0;
    ch=gc(); 
    }
    while (isdigit(ch)) {
    x=x*10+ch-'0';
    ch=gc(); 
    }
    return positive?x:-x;
}

inline void write(ll x){
    if(x<0)x=-x,putchar('-');
    if(x>9)write(x/10);putchar(x%10+'0');
}

inline void writeln(ll x){
    write(x);puts("");
}

struct Node{
    int id,num,l,r,m;
    inline bool operator<(const Node x)const{
        if(num!=x.num)return num<x.num;
        return id<x.id;
    }
}a[Max],b[Max];

struct Tree{
    int maxn;
}st[Max*4];

int n,m,k,now,c[Max];
ll ans;
stack<Node>stk;
priority_queue<Node>que;

inline void build1(int node,int l,int r){
    if(l==r){
        st[node].maxn=a[l].num;
        return;
    }
    int mid=(l+r)>>1;
    build1(node<<1,l,mid);
    build1(node<<1|1,mid+1,r);
    st[node].maxn=max(st[node<<1].maxn,st[node<<1|1].maxn);
    return;
}

inline void build2(int node,int l,int r){
    if(l==r){
        st[node].maxn=b[l].num;
        return;
    }
    int mid=(l+r)>>1;
    build2(node<<1,l,mid);
    build2(node<<1|1,mid+1,r);
    st[node].maxn=max(st[node<<1].maxn,st[node<<1|1].maxn);
    return;
}

inline int query(int node,int l,int r,int L,int R){
    if(l>R)return -1e9;
    if(r<L)return -1e9;
    if(l>=L&&r<=R)return st[node].maxn;
    int mid=(l+r)>>1;
    return max(query(node<<1,l,mid,L,R),query(node<<1|1,mid+1,r,L,R));
}

inline void add(int x,int k){
    while(x<=200000){
        c[x]+=k;
        x+=low(x);
    }
    return;
}

inline int ask(int x){
    int ans=0;
    while(x){
        ans+=c[x];
        x-=low(x);
    }
    return ans;
}

inline bool cmp(Node x,Node y){
    if(x.m!=y.m)return x.m>y.m;
    return x.id<y.id;
}

int main(){
    n=read();m=read();k=read();
    {
    int i=1;
    while (i<=n) {
        a[i].num=read();
        a[i].id=i;
    	i++; 
    
    }}
    {
    int i=1;
    while (i<=m) {
        b[i].num=read();
        b[i].id=i;
    	i++; 
    
    }}
    {
    int i=n;
    while (i>=1) {
        while(!stk.empty()&&stk.top().num>=a[i].num){
            int j=stk.top().id;
            stk.pop();
            a[j].l=i;
        }
        stk.push(a[i]);
    	i--; 
    
    }}
    while(!stk.empty()){
        int j=stk.top().id;
        stk.pop();
        a[j].l=0;
    }
    {
    int i=m;
    while (i>=1) {
        while(!stk.empty()&&stk.top().num>=b[i].num){
            int j=stk.top().id;
            stk.pop();
            b[j].l=i;
        }
        stk.push(b[i]);
    	i--; 
    
    }}
    while(!stk.empty()){
        int j=stk.top().id;
        stk.pop();
        b[j].l=0;
    }
    {
    int i=1;
    while (i<=n) {
        while(!stk.empty()&&stk.top().num>a[i].num){
            int j=stk.top().id;
            stk.pop();
            a[j].r=i;
        }
        stk.push(a[i]);
    	i++; 
    
    }}
    while(!stk.empty()){
        int j=stk.top().id;
        stk.pop();
        a[j].r=n+1;
    }
    {
    int i=1;
    while (i<=m) {
        while(!stk.empty()&&stk.top().num>b[i].num){
            int j=stk.top().id;
            stk.pop();
            b[j].r=i;
        }
        stk.push(b[i]);
    	i++; 
    
    }}
    while(!stk.empty()){
        int j=stk.top().id;
        stk.pop();
        b[j].r=m+1;
    }
    build1(1,1,n);
    {
    int i=1;
    while (i<=n) {
        now=1e9;
        if(a[i].l!=0)now=min(now,query(1,1,n,a[i].l,i));
        if(a[i].r!=n+1)now=min(now,query(1,1,n,i,a[i].r));
        a[i].m=now;
    	i++; 
    
    }}
    build2(1,1,m);
    {
    int i=1;
    while (i<=m) {
        now=1e9;
        if(b[i].l!=0)now=min(now,query(1,1,m,b[i].l,i));
        if(b[i].r!=m+1)now=min(now,query(1,1,m,i,b[i].r));
        b[i].m=now;
    	i++; 
    
    }}
    sort(a+1,a+n+1);
    sort(b+1,b+m+1,cmp);
    now=1;
    {
    int i=1;
    while (i<=n) {
        {
        int j=now;
        while (a[i].num+b[now].m>k&&now<=m) {
            add(b[now].num,1);
            que.push(b[now]);
        	now++; 
        
        }}
        while(!que.empty()&&que.top().num+a[i].num>k){
            add(que.top().num,-1);
            que.pop();
        }
        ans+=ask(200000)-ask(max(0,k-a[i].m));
    	i++; 
    
    }}
    writeln(ans);
    return 0;
}
