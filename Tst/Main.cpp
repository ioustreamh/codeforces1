
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

int main()
{
  char a[123456];
  long long n,res=0;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i]=='1') res++;
  }
  if(res==1 || res == n) cout << "HARD";
    else cout << "EASY";
}
