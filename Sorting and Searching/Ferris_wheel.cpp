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
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
	ll i=0,j=n-1;
	ll ans=0;
	while(i<j){
		if(a[i]+a[j]<=x){
			i++;
			j--;
			ans++;
		}
		else{
			j--;
			ans++;
		}
	}
	if(i==j) ans++;
	cout << ans;
	return 0;
}
