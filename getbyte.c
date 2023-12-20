//4)
/*
* getByte - extract byte n from word x
* Examples: getByte(0x12345678, 1)  = 0x56
*Legal ops: ! ~ & ^| + << >>
Max ops: 6
*/
#include<stdio.h>
#include<assert.h>
int getByte(int x, int n){
    return (x>>(n<<3))&255;
}
int main(){
    assert(getByte(0x12345678, 1));
}