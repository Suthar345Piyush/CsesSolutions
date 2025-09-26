

#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll cnt = 0;
    while (n > 0) {
        n /= 5;
        cnt += n;
    }

    cout << cnt << "\n";
    return 0;
}
