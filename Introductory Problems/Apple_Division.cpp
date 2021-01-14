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
    ll a[n],total=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        total+=a[i];
    }
    ll mini=LLONG_MAX;
    for(ll i=0;i<pow(2,n);i++){
        ll temp=i;
        ll sum=0;
        for(ll j=0;j<25;j++){
            if(temp&1==1) sum+=a[j];
            temp/=2;
        }
        mini=min(mini,abs((total-sum)-sum));
    }
    cout << mini;
    return 0;
}
