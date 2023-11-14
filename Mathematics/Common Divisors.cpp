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
const int N=1000002;
vector<int>v[N+1];
int ans[N];
int b[N];
 
int divisor()
{
   for(int i =1;i<=N;i++)
    {
        for(int j =i;j<=N;j+=i)
        {
            if(b[j])ans[i]=ans[i]+b[j];
        }
    }
}
 
void solve()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){cin>>a[i];b[a[i]]++;}
  divisor();
  sort(a,a+n);
  int res=1;
  for(int i=a[n-1];i>=0;i--)
  {
    if(ans[i]>1){res=i;break;}
  }
  cout<<res<<endl;
 
}
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
  int t=1;
  //cin>>t;
  while(t--)
  {
     solve();
  }
 
 
}
