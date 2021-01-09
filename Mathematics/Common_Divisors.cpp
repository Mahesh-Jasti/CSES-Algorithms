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
    cout.tie(NULL);
	// CODE goes here
	ll n;
	cin >> n;
	ll can[1000001]={0};
	for(ll i=0;i<n;i++){
		ll x;
		cin >> x;
		can[x]++;
	}
	for(ll i=1000000;i>0;i--){
		ll x=0;
		for(ll j=i;j<1000001;j+=i){
			x+=can[j];
		}
		if(x>1){
			cout << i << "\n";
			break;
		}
	}
	return 0;
}
