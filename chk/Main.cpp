
  //In The Name Of GOD

#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll mod = 998244353;
const ll inf = 2000000000;
const ll infll = (ll)2*1000*1000*1000*1000*1000*1000;
const ll maxn = 100*1000+1;
#define pb push_back
#define pp pop_back
#define X first
#define Y second
#define IO ios_base::sync_with_stdio(false);

int main(){
  IO;
  int n,ans=0;
  cin>>n;
  ll a[n],b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i]%100000000;
    ans+=(ll)b[i];
  }
  cout<<ans<<endl;
}
