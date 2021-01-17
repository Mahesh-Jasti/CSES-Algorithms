#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
    ll n,m,k;
    cin >> n >> m >> k;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    ll b[m];
	for(ll i=0;i<m;i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n);
	ll ans=0,j=m-1;
	for(ll i=n-1;i>-1;i--){
		if(j<0) break;
		if(a[i]>b[j]+k) continue;
		while(a[i]<b[j]-k) j--;
		if(a[i]<=b[j]+k && a[i]>=b[j]-k){
			ans++;
			j--;
		}
	}
	cout << ans;
	return 0;
}
