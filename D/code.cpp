//### In The Name Of GOD ###

#include <iostream>

using namespace std;

typedef long long ll ;

//#define int ll
#define pb push_back
#define bp pop_back
#define pf push_front
#define fp pop_front
#define X first
#define Y second
#define IO ios_base::sync_with_stdio(false);
#define sz(a) (int)(a.size())

const int MOD = 1000000007;
const int INF = 30 * 1000 + 20;
const int MAXN = 5000;
const int MLOG = 18;
const int NMAX = 60;

int log(int x){
	int LOG = 0;
	while(x > 1){
		LOG++;
		x += 1;
		x /= 2;
	}
	return LOG;
}

signed main(){
	int n, mx = 0;
	cin >> n;
	int A[n], MX[n], MN[n], L[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
		L[i] = log(A[i]);
		mx = max(mx, L[i]);
	}
	int mini = INF, maxi = 0;
	for(int i = 0; i < n; i++){
		MN[i] = A[i];
		MX[i] = A[i];
		for(int i = 0; i < mx - L[i]; i++){
			MN[i] *= 2;
			MX[i] += MX[i] + 1;
		}
		maxi = max(maxi, MX[i]);
		mini = min(mini, MN[i]);
	}
	int x = mini, y = maxi;
	while(x > y){
		int xx = x/2, yy = y;
		y = min(yy, xx);
		x = max(yy, xx);
	}
	int res = x;
	for(int i = 0; i < n; i++){
		A[i] /= res;
		L[i] = log(A[i]);
	}
	int ans = 0;
	ans += L[0];
	for(int i = 1; i < n; i++){
		ans += max((int)0, L[i]-L[i-1]);
	}
	cout << res << ' ' << ans;
}
