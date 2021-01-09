#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

ll lol=1000000007;
ll pow(ll a, ll b){
	ll x=1;
	while(b>0){
		if(b%2) x=(a*x)%lol;
		b/=2;
		a=(a*a)%lol;
	}
	return x;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
	ll t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		cout << (pow(a,b)+lol)%lol << "\n";
	}
	return 0;
}
