// number spiral 

#include<bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int t;
   cin >> t;
   while(t--){
     long long y , x;
     cin >> y >> x;

      long long z = max(y , x);
      long long ans;

      long long z_start = (z - 1) * (z - 1);

      if(z % 2 == 1){  // odds
         if(y == z){
           ans = z_start + x;
         } else {
           ans = z_start + 2 * z - y;
         }
      } else {   // even
         if(x == z){
           ans = z_start + y;
         } else {
           ans = z_start + 2 * z - x;
         }
      }


      cout << ans << "\n";
   }
   return 0;
}