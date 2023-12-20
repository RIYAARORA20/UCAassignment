//1)
/*
/*  bitAnd - x & y using only ~ and |
/* Example bitAnd(6, 5) = 4
Legal ops:  ~ |  
/*Max ops: 8
*/
#include<stdio.h>
#include<assert.h>

int bitAnd(int x, int y){
    return ~(~x | ~y);
}
int main(){
    assert(bitAnd(4,5));
    assert(bitAnd(2,3));
}






// int invert(int a, int p, int n){
//     int mask = ~((~0)<<n) << p;
//     // printf("%x",a^mask);
//     return a ^ mask;
// }

// int conditional( int x, int y, int z){
//     int mask = !!x;
//     mask = ~mask + 1;
//     return (y & mask) | (z & ~mask);
// }

// int bang(int x) {
//     return ((x | (~x + 1)) >> 31) + 1;
// }