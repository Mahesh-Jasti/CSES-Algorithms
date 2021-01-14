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
		ll a,b;
		cin >> a >> b;
		if(a<b) swap(a,b);
		bool flag=false;
		ll i=0;
		while(1){
			if((a>=0 && b>=0) && ((a==2 && b==1) || (a==b && a%3==0))){
			    flag=true;
			    break;
			}
			if(i==1) break;
			ll temp=a-b;
			a-=(2*temp);
			b-=(temp);
			i++;
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
