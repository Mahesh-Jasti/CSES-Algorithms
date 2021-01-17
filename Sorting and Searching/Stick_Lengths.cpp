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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
	ll x=n/2;
	ll ans=0;
	for(ll i=0;i<n;i++) ans+=(abs(a[i]-a[x]));
	cout << ans;
	return 0;
}
