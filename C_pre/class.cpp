#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool isPerfect(int x){
      long double sr = sqrt(x);
      return ((sr - floor(sr)) == 0);
   }
   bool judgeSquareSum(int c) {
      if (c == 0)
         return true;
      int b;
      for (int i = 0; i < ceil(sqrt(c)); i++) {
         b = c - i * i;
         if (isPerfect(b))
            return true;
      }
      return false;
   }
};
main(){
   Solution ob;
   cout << (ob.judgeSquareSum(61));
}