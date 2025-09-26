// Bit String Cses Problem solution 
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


#define ll long long
#define vi vector<int> 
#define vi vector<ll>
#define pii pair<int , int>
#define pll pair<ll , ll>
#define pb push_back
#define mp make_pair
#define fi first 
#define se second 


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

// we are going for the 2^n , due to test case n = 3 , then answer is 8 
// using binary exponentiation or fast exponentiation 

void solve(){
    ll n;
    cin >> n;

    ll base = 2;
    ll ans = 1;

    while(n > 0){
       if(n%2 == 1){
          ans = (base * ans) % MOD;
       }

       base = (base * base) % MOD;
       n /= 2;
    }

    cout << ans << "\n";
}

int main(){
      fastio
    int t = 1;

    while(t--){
       solve();
    }
    return 0;
}



