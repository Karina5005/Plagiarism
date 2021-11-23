#include<bits/stdc++.h>
using namespace std;
vector<long long>divisor[100000];
vector<int>primese(long long  n){
    vector<int>arr(n+1);
    int p =2;
    while((p<=n)){
        for(long long  i = p*1;i<=n;i+=p)/* 'for' inside */
        {
            divisor[p].push_back(i);
        }
        p++;
    }
    return arr;
}

bool isprime(long long  n){
    /* 'if' begin */
    if(n == 1)/* 'if' inside */
    {
        return false;
    }
    for(long long  i=2;i<=sqrt(n);++i)/* 'for' inside */
    {
        /* 'if' begin */
        if(n%i == 0)/* 'if' inside */
        {
            return false;
        }

    }
    return true;
}
long long gcd(long long  int a,long long int b){
    /* 'if' begin */
    if(b==0)/* 'if' inside */
    {
        return a;
    }
    return gcd(b,a%b);
}
long long  lcm(long long  a ,long long  b){
    return (a*b)/gcd(a,b);
}


long long  convert_large_number(string s,int mod){
    long long nehal = 0;
    for(int i=0;i<s.size();++i)/* 'for' inside */
    {
        nehal = (nehal*10+s[i]-'0')%mod;
    }
    return nehal;
}
vector<vector<int>>subset(vector<int>v){
    int range = v.size();
    range = pow(2,range)-1;
    vector<vector<int>>result;
    for(int i=0;i<=range;++i)/* 'for' inside */
    {
        vector<int>check;
        for(int j = 0;j<v.size();++j)/* 'for' inside */
        {
            /* 'if' begin */
            if((i&(1<<j))!=0)/* 'if' inside */
            {
                check.push_back(v[j]);
            }
        }
        result.push_back(check);
        check.clear();
    }
    return result;
}
vector<int> prime_factorization(long long n){
    long long i =2;
    vector<int>result;
    while(n!=1){
        while(n%i == 0){
            result.push_back(i);
            n/=i;
        }
        i++;
    }
    /* 'if' begin */
    if(n!=1)/* 'if' inside */
    {
        result[n]++;
    }
    return result;
}
map<long long ,long long >  prime_result(long long n){
    map<long long ,long long >result;
    for(long long i=2;i*i<=n;++i)/* 'for' inside */
    {
        while(n%i == 0){
            result[i]++;
            n/=i;
        }
        
    }
    /* 'if' begin */
    if(n!=1)/* 'if' inside */
    {
        result[n]++;
    }
    return result;
}

long long int fast_exponentaiion(long long a ,long long n){
    long long int result =1;
    int i=0;
    while(n>0){
        /* 'if' begin */
        if(n&1)/* 'if' inside */
        {
            result = result*a;
        }
        a= a*a;
        n>>=1;
    }
    return result;
}

bool ispalindrome(string s,int l ,int h){
    /* 'if' begin */
    if(l>=h)/* 'if' inside */
    {
        return true;
    }
    /* 'if' begin */
    if(s[l] !=s[h])/* 'if' inside */
    {
        return false;
    }
    return ispalindrome(s,l+1,h-1);
}

int lower_bound(int arr[], int N, int X)
{
    int mid;
    int low = 0;
    int high = N;
    while (low < high) {
        mid = low + (high - low) / 2;
        /* 'if' begin */
        if (X <= arr[mid]) /* 'if' inside */
        {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    /* 'if' begin */
    if(low < N && arr[low] < X) /* 'if' inside */
    {
       low++;
    }
    return low;
}
vector<long long int>power_two;
int number(string s,string b){
    int result =0;
    for(int i=0;i<s.size();i+=2)/* 'for' inside */
    {
        string checking;
        checking+=s[i];
        checking+=s[i+1];
        /* 'if' begin */
        if(checking == b)/* 'if' inside */
        {
            result++;
        }

    }
    return result;
}
long long string_hashing(string a){
    long long result = 0;
    long long p_pow =0;
    long long p =31;
    for(char &x:a){
        long long s = (int(x)-int('a'))+1;
        result+=(s*fast_exponentaiion(p,p_pow));
        p_pow++;
    }
    return result;
}
void solve(){  
    int n;
    cin>>n;
    vector<pair<long long,int>>v(n);
    for(int i=0;i<n;++i)/* 'for' inside */
    {
        long long s;
        cin>>s;
        /* 'if' begin */
        if(s<=(2*n))/* 'if' inside */
        {
            v[i] = {s,i+1};
        }
    }
    sort(v.begin(),v.end());
    long long result =0;
    for(int i=0;i<v.size();++i)/* 'for' inside */
    {
        for(int j=i+1;j<v.size();++j)/* 'for' inside */
        {
            /* 'if' begin */
            if((v[i].first*v[j].first)>2*n)/* 'if' inside */
            {
                break;
            }
            /* 'if' begin */
            if((v[i].first*v[j].first) == (v[i].second+v[j].second))/* 'if' inside */
            {
                result++;
            }
        }
    }
    cout<<result<<endl;
    return ;
}
int gcd2,x,y;
void gcd_extended(int a,int b){
    /* 'if' begin */
    if(b == 0)/* 'if' inside */
    {
        gcd2 = a;
        x = 1;
        y = 0;
    }else{
        gcd_extended(b,a%b);
        int temp = x;
        x = y;
        y = temp-(a/b)*y;
    }
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}