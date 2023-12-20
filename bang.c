//7)
/* bang - Compute !x without using !
*  Examples: bang(3)=0, bang(0)=1
*  Legal ops: ~ & ^ | + << >>
*  Max ops: 12
*/ 
#include<stdio.h>
#include<assert.h>
// int bang(int x) {
//     return ((x | (~x + 1)) >> 31) + 1;
// }
int bang(int x) {
  // Shift x to get its sign bit
  int sign = (x >> 31) | ((~x + 1) >> 31); // Sign bit of x or -x

  // If x is 0, sign will be 0; otherwise, sign will be 0xFFFFFFFF or -1
  return (sign + 1) & 1;
}

int main(){
    assert(bang(3)==0);
    assert(bang(0)==1);
}