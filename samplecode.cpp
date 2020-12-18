#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define newl '\n'
#define ull unsigned long long
#define pi 3.14159265

ll nCr(ll n,ll r)
{
	r = min(r,n-r);
	if(r<0)
		 return 0;
	if(r == 0)
		return 1;
	ll ans = 1;
	for(ll i = 1;i<=r;i++)
	{
		ans = ans*(n-i+1)/i;
    }
	return ans;
 		
}


ll logn(int n, int r) 
{ 
     return (n > r - 1) ? 1 + logn(n / r, r) : 0; 
} 


ll power(ll a,ll b) {
	if(b == 1) return a;
	if(b == 0) return 1;
	ll m1 = power(a,b/2);
	if(b%2) return m1*m1*a;
	return m1*m1;
}


bool isprime(ll a)
{
    if(a<=1)
        return false;
    if(a==2||a==3)
        return true;
    if(a%2==0||a%3==0)
        return false;
    for(ll i=5;i*i<=a;i=i+6)
    {
        if(a%i==0||a%(i+2)==0)
            return false;
    }
    return true;
}

ll gcd(ll a, ll b) {
  ll x=1;
  if(a%b==0)
  return b;
  while(x!=0)
  {
    x= a%b;
    a=b;
    b=x;
  }
  
  return a;
}
//for unknown testcases use
//while(!cin.eof())
//****************************************************************************************************
//****************************************************************************************************

void soln()
{

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}
