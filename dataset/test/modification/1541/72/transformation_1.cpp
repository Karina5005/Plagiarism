#include<bits/stdc++.h>

using namespace std;
 
 #define ll         long long 
 #define pb         push_back
 #define mp         make_pair
 #define ff         first
 #define ss         second
 #define u_m        unordered_map
 #define p_q        priority_queue
 #define ve         vector  
 #define mod        1000000007  
 #define dub        double

 


 void fastio()
 {
   ios_base::sync_with_stdio();
   cin.tie(NULL);
 }

vector<bool>is_prime;

ve<ll> seive(ll n){
    vector<bool>ip(n+1,true);
    for( ll i=2;i*i<n;i++)/* 'for' inside */
    {
         /* 'if' begin */
         if(ip[i]==true)
         /* 'if' inside */
         {
            for( ll j=i*i;j<=n;j+=i)
            /* 'for' inside */
            {
                ip[j]=false;
            }
         }
    }
  is_prime=ip;
 ve<ll>primes;
primes.pb(1);
 for(ll i=2; i<ip.size();i++)
 /* 'for' inside */
 {
    /* 'if' begin */
    if( ip[i]==true)
         /* 'if' inside */
         primes.pb(i);
 } 
  
return primes;

}



ve<ll> seg_seive(ll l ,ll r)
{   
    ll root=(ll)sqrt(r);
    ve<ll> primes=seive(root);
    ve<bool> ip((r-l+1),true);
    for(ll i=1;i<primes.size();i++)/* 'for' inside */
    {
        ll base=( l/primes[i])*primes[i];
        /* 'if' begin */
        if( base<l)
            /* 'if' inside */
            base+=primes[i];
       for(ll j=base;j<=r;j+=primes[i])/* 'for' inside */
       {
            ip[j-l]=false;
       }
    }
    ve<ll>seg_primes;
  for(ll i=0;i<ip.size();i++)/* 'for' inside */
  {
     /* 'if' begin */
     if(ip[i]==true)
        /* 'if' inside */
        seg_primes.pb(i+l);
  }
   return seg_primes;
}

ve<ll> range_prefix_sum( ve<bool>ip){
ve<ll> ps((ll)ps.size());
 ps[0]=1;
 for( ll i=1;i<=ps.size();i++)
 /* 'for' inside */
 {
    ps[i]=ps[i-1]+ip[i];
 } 
return ps;
}


string give_binary(ll n)
{
      /* 'if' begin */
      if(n==0)
        /* 'if' inside */
        {
            
            return "0";
        }
       
       /* 'if' begin */
       if( n%2==0)
       /* 'if' inside */
       {
        string s=give_binary(n/2);
        s+="0";
       
        return s;
       }
       string s=give_binary(n-1);
       s[s.length( )-1]='1';
       
       return s;
}



 

 






void Solve(ll n , ve<ll>&nums)   
{   
  ll ans=0;
  ll lm=3;
  ll ul=( (2*n)-1);  
  for( ll i=0;i<n;i++)
  /* 'for' inside */
  {
    ve<ll>mul;
    for(ll j=nums[i];j<=ul;j+=nums[i])/* 'for' inside */
    {
        /* 'if' begin */
        if(j>=lm)
            /* 'if' inside */
            mul.pb(j);
    }
    for(ll j=0;j<mul.size();j++)/* 'for' inside */
    {
       ll dj=(nums[i]*(mul[j]/nums[i])-(i+1));
        /* 'if' begin */
        if( (dj-1) >i && (dj-1)<nums.size())/* 'if' inside */
        {
            /* 'if' begin */
            if(nums[dj-1]==(mul[j]/nums[i]))
                 /* 'if' inside */
                 ans++;  
        }


    }


  }
    printf("%lld\n",ans);
    return;
    }







int main(){
   
   fastio();
   ll t;
   scanf("%lld",&t); 
   
   while(t--){
      ll n;
      scanf("%lld",&n);
      ve<ll> nums(n);
      for( ll i=0;i<n;i++)/* 'for' inside */
      {
         scanf("%lld",&nums[i]);
      }
      Solve(n, nums);
  }
  return 0;

} 

