//2)
/*
/*  bitXor - x ^ y using only ~ and &
/* Example bitXor(4, 5) = 1
Legal ops:  ~ &  
/* Max ops: 14
*/
#include<stdio.h>
#include<assert.h>
int bitXor(int x, int y){
    return ((x&(~y)) | (y&(~x)));
}
int main(){
    assert(bitXor(2,3));
}