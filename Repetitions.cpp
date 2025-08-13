// 3rd problem -> repetitions 

// example -> ATTCGGGA

//  using ordered map 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int maxRep = 1 , currRep = 1;
     
     for(int i=1; i<str.size(); i++){
       if(str[i] == str[i-1]){
         currRep++;
       }
       else {
          currRep = 1;
       }

       maxRep = max(maxRep , currRep);
     }
     cout << maxRep << endl;
}

