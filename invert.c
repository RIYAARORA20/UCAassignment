//8)
/* 
/* Return x with the n bits that begin at position p inverted (i.e. turn 0 /* into 1 and vice versa)
/* and the rest left unchanged. Consider the indices of x to begin with the /* lower -order bit   numbered
/* Legal ops: ~ & ^ | << >>
/* as zero
*/
// #include<stdio.h>
// #include<assert.h>
// int invert(int a, int p, int n){
//     int mask = ~((~0)<<n) << p;
//     // printf("%x",a^mask);
//     return a ^ mask;
// }
// int main() {
//     int x, p, n;

//     // Taking user input for x, p, and n
//     printf("Enter an integer (x): ");
//     scanf("%d", &x);
//     printf("Enter the starting position (p): ");
//     scanf("%d", &p);
//     printf("Enter the number of bits to invert (n): ");
//     scanf("%d", &n);

//     // Displaying the initial value of x
//     printf("Initial value of x: %d\n", x);

//     // Calling the function and displaying the result
//     int result = invert(x, p, n);
//     printf("Result after inverting %d bits from position %d: %d\n", n, p, result);

//     return 0;
// }

// #include <stdio.h>

// /* Function to invert n bits in x starting from position p */
// int invertBits(int x, int p, int n) {
//     int mask = (~(~0 << n)) << p; // Create a mask for n bits starting from position p
//     return x ^ mask; // XOR operation to invert the selected bits
// }

// int main() {
//     int x, p, n;

//     // Taking user input for x, p, and n
//     printf("Enter an integer (x): ");
//     scanf("%d", &x);
//     printf("Enter the starting position (p): ");
//     scanf("%d", &p);
//     printf("Enter the number of bits to invert (n): ");
//     scanf("%d", &n);

//     // Displaying the initial value of x
//     printf("Initial value of x: %d\n", x);

//     // Calling the function and displaying the result
//     int result = invertBits(x, p, n);
//     printf("Result after inverting %d bits from position %d: %d\n", n, p, result);

//     return 0;
// }

#include <stdio.h>

/* Function to invert n bits in x starting from position p */
int invertBits(int x, int p, int n) {
    int mask = (~(~0 << n)) << p; // Create a mask for n bits starting from position p
    return x ^ mask; // XOR operation to invert the selected bits
}

int main() {
    int x, p, n;

    // Taking user input for x, p, and n
    printf("Enter an integer (x): ");
    scanf("%d", &x);
    printf("Enter the starting position (p): ");
    scanf("%d", &p);
    printf("Enter the number of bits to invert (n): ");
    scanf("%d", &n);

    // Displaying the initial value of x
    printf("Initial value of x: %d\n", x);

    // Calling the function and displaying the result
    int result = invertBits(x, p, n);
    printf("Result after inverting %d bits from position %d: %d\n", n, p, result);

    return 0;
}
