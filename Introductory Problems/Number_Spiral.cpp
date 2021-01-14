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
	ll t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> x >> y;
		ll maxi=max(x,y);
		ll ans=(maxi-1)*maxi+1;
		if(y<maxi){
			if(x%2) ans-=(x-y);
			else ans+=(x-y);
		}
		else if(x<maxi){
			if(y%2) ans+=(y-x);
			else ans-=(y-x);
		}
		cout << ans << "\n";
	}
	return 0;
}
