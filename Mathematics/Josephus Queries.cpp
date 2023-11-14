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
const int M=10;
 
int josephus(int n,int k) {
   if(n==1)return 1;
   if(k<=(n+1)/2){
    if(2*k>n)return (2*k)%n;
    else return 2*k;
  }
   int c= josephus(n/2,k-(n+1)/2);
   if(n%2)return 2*c+1;
   else return 2*c-1;
}
 
void solve()
{
  int n,k;
  cin>>n>>k;
  cout<<josephus(n,k) <<endl;
}
 
 
int main() {
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
