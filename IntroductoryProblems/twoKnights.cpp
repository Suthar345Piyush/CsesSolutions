// two knights ( straight Combinations problem )

#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n , totalComb , inValidComb , i;
   cin >> n;
   for(i=1; i<=n; i++){
     totalComb = ((i*i) * ((i*i) - 1))/2;
      inValidComb = 4*(i-1)*(i-2);

      cout << totalComb - inValidComb << endl;
   }
   return 0;
}

