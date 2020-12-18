#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define newl '\n'
#define ull unsigned long long
#define pi 3.14159265
//---------------------------
// insomnia cure
//---------------------------

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

void soln()
{
    int n; int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cin>>n; int x;
    for(int i=0;i<3;i++)
    {
        x= gcd(arr[i],arr[i+1]);
    }
    cout<<x;
}

int main()
{
    soln();
    return 0;
}
