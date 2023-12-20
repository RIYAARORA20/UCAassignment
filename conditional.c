//6)
/*
* conditional - same as x ? y : z
* example conditional (2, 4, 5) = 4
* ! ~ & ^ | + << >>
* Max ops: 16
*/
#include<stdio.h>
#include<assert.h>
int conditional( int x, int y, int z){
    int mask = !!x;
    mask = ~mask + 1;
    return (y & mask) | (z & ~mask);
}
int main(){
    assert(conditional(2,4,5));
}