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
const int N=1e6+5;
int a[N];
 
void div() {
    for(int i=1;i<N;i++)
    {
      for(int j=i;j<N;j+=i) a[j]++;
    }
}
 
 
void solve() { 
  int n;
  cin>>n;
  cout<<a[n]<<endl;
 
}
 
 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
 
    div();
    int t;
    cin>>t;
    while(t--) {
       solve();
     
    }
 }
