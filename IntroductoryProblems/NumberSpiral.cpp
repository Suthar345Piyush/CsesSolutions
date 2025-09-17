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

      if(z % 2 == 0){
         if(y == z){
           ans = (z-1) * (long long)(z - 1) + x;
         } else {
           ans = z * z - y + 1;
         }
      } else {
         if(x == z){
           ans = (z-1) * (long long)(z - 1) + y;
         } else {
           ans = z * z - x + 1;
         }
      }


      cout << ans << "\n";
   }
   return 0;
}