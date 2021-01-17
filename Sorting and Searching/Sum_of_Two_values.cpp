#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

struct var{
	ll val;
	ll idx;
};

bool compare(var x, var y){
    return x.val<y.val;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
    ll n,k;
    cin >> n >> k;
    var a[n];
    for(ll i=0;i<n;i++){
    	cin >> a[i].val;
    	a[i].idx=i;
    }
    sort(a,a+n,compare);
    ll i=0,j=n-1;
	ll ans1=-1,ans2=-1; 
	while(i<j){
		if(a[i].val+a[j].val==k){
			ans1=a[i].idx+1;
			ans2=a[j].idx+1;
			break;
		}
		else if(a[i].val+a[j].val>k) j--;
		else i++;
	}
	if(ans1==-1 || ans2==-1){
		cout << "IMPOSSIBLE";
		return 0;
	}
	cout << ans1 << " " << ans2;
	return 0;
}
