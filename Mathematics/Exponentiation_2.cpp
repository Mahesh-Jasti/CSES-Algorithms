#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

ll lol=1000000007;
ll pow(ll a, ll b, ll loll){
	ll x=1;
	while(b>0){
		if(b%2) x=(a*x)%loll;
		b/=2;
		a=(a*a)%loll;
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
		ll a,b,c;
		cin >> a >> b >> c;
		ll bc=pow(b,c,lol-1);
		cout << (pow(a,bc,lol)+lol)%lol << "\n";
	}
	return 0;
}
