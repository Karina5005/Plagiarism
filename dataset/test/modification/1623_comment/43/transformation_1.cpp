
if (a > b) /* 'if' inside */
{ a = b; return true; } return false; }
if (a < b) /* 'if' inside */
{ a = b; return true; } return false; }
if (b > a) /* 'if' inside */
{return gcd(b, a);} /* 'if' begin */
if (b == 0) /* 'if' inside */
{return a;} return gcd(b, a % b);}
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
if (b == 0) /* 'if' inside */
{v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} 
/* 'if' begin */
if (arr[i] == 0) /* 'if' inside */
{vect.push_back(i); for (int j = 2 * i; j <= n; j += i)/* 'for' inside */
arr[j] = 1;} return vect;}
if (n % 2 == 0) /* 'if' inside */
{number /= 2; while (n % 2 == 0)n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) /* 'for' inside */
{/* 'if' begin */
if (n % i == 0) /* 'if' inside */
{while (n % i == 0)n /= i; number = (number / i * (i - 1));}} /* 'if' begin */
if (n > 1)/* 'if' inside */
number = (number / n * (n - 1)) ; return number;} 
if(power == 0)/* 'if' inside */
{return 1;}/* 'if' begin */
if(power & 1)/* 'if' inside */
{return ind * bin_pow(ind,power - 1) % MOD;}else{return bin_pow((ind * ind) % MOD , power / 2) % MOD;}}
{sum = max(array[k],sum+array[k]);best = max(best,sum);}return  best ;}
{cout<<((num>>i)&1);}cout<<endl;}
if (n % 4 == 0)/* 'if' inside */
return n;/* 'if' begin */
if (n % 4 == 1)/* 'if' inside */
return 1;/* 'if' begin */
if (n % 4 == 2)/* 'if' inside */
return n + 1;return 0;}
if(x == 0)/* 'if' inside */
return "";else{string s = toBinary(x / 2);s.push_back(char('0' + x % 2));return s;}}
        if(parent[node] == node) /* 'if' inside */
        return node; 
        {
        if(pu==pv)/* 'if' inside */
        {
        if(size[pu]<size[pv])/* 'if' inside */
        {
        {
            if (a[i] < x)
                return false;
        if (check(mid))
            l = mid;