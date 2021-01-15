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
    ll dp[n+1]={0};
    dp[1]=1;
    for(ll i=2;i<n+1;i++){
        if(i<=6) dp[i]++;
        for(ll j=1;j<=6;j++){
            if(i-j<=0) continue;
            ll temp=dp[i-j];
            dp[i]+=temp;
        }
        dp[i]%=1000000007;
    }
    cout << dp[n];
    return 0;
}
