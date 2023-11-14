#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define f first
#define s second
#define in insert
#define er erase
#define pi 3.141592653589793238
#define YES cout << "YES\n"
#define NO cout << "NO\n"
//#define end cout<<endl
#define bcntz __builtin_ctz 
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;
#define st(s) sort(s.begin(),s.end())
const int M=1e9+7;
 
ll binExp(ll a,ll b,int M)
{
  ll res=1;
  while(b)
  {
     if(b%2)res=(res*a)%M;
     a=(a*a)%M;
     b/=2;
  }
  return res;
}
 
void solve()
{
   ll a,b,c;
   cin>>a>>b>>c;
   ll k = binExp(b,c,M-1);
   cout<<binExp(a,k,M)<<endl;
}
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
  ll t;
  cin>>t;
  while(t--)
  {
     solve();
   
  }
 
 
}
