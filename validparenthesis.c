// bool isValid(char * s){
    
//     int len = strlen(s), ptr = 0;
//     char *stack = malloc(len+1); //used to keep track of the last open bracket, brace, or parenthesis
    
//     int a = 0, b = 0, c = 0; //semaphores (flags)
    
//     while(*s != 0)
//     {
//         if(*s == '(') {
//             a++;
//             stack[++ptr] = 1;
//         }
        
//         if(*s == '[') {
//             b++;
//             stack[++ptr] = 2;
//         }
        
//         if(*s == '{') {
//             c++;
//             stack[++ptr] = 3;
//         }
        
//         if(*s == ')')
//         {
//             if(stack[ptr] == 1) {
//                 a--;
//                 ptr--;

//             }
//             else return false;
//         }
//         if(*s == ']')
//         {
//             if(stack[ptr] == 2) {
//                 b--;
//                 ptr--;
//             }
//             else return false;

//         }
//         if(*s == '}')
//         {
//             if(stack[ptr] == 3) {
//                 c--;
//                 ptr--;
//             }
//             else return false;
//         }
        
//         s++;
//     }
    
//     if(a > 0 || b > 0 || c > 0) //if the bracket isn't closed off
//         return false;
//     return true; //valid parentheses
// }

// #include <stdio.h>
// #include <stdbool.h>

// // Function to check if a character is an opening parenthesis
// bool isOpeningParenthesis(char c) {
//     return (c == '(' || c == '{' || c == '[');
// }

// // Function to check if a character is a closing parenthesis
// bool isClosingParenthesis(char c) {
//     return (c == ')' || c == '}' || c == ']');
// }

// // Function to match opening and closing parentheses
// bool isValidParentheses(const char *expression) {
//     // Create a stack to store opening parentheses
//     char stack[100];
//     int top = -1; // Initialize stack top

//     for (int i = 0; expression[i] != '\0'; i++) {
//         if (isOpeningParenthesis(expression[i])) {
//             // Push opening parentheses onto the stack
//             top++;
//             stack[top] = expression[i];
//         } else if (isClosingParenthesis(expression[i])) {
//             // If stack is empty or the closing parenthesis does not match the top of the stack
//             if (top == -1 || 
//                 (expression[i] == ')' && stack[top] != '(') || 
//                 (expression[i] == '}' && stack[top] != '{') || 
//                 (expression[i] == ']' && stack[top] != '[')) {
//                 return false; // Not a valid expression
//             } else {
//                 top--; // Pop matching opening parenthesis
//             }
//         }
//     }

//     // If stack is empty, all parentheses are valid
//     return top == -1;
// }

// int main() {
//     const char *expression = "{[()]}";

//     if (isValidParentheses(expression)) {
//         printf("The expression has valid parentheses.\n");
//     } else {
//         printf("The expression has invalid parentheses.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// bool isOpeningParenthesis(char c) {
//     return (c == '(' || c == '{' || c == '[');
// }

// bool isClosingParenthesis(char c) {
//     return (c == ')' || c == '}' || c == ']');
// }

// bool isValidParentheses(const char *expression) {
//     char stack[100];
//     int top = -1;

//     for (int i = 0; expression[i] != '\0'; i++) {
//         if (isOpeningParenthesis(expression[i])) {
//             top++;
//             stack[top] = expression[i];
//         } else if (isClosingParenthesis(expression[i])) {
//             if (top == -1 || 
//                 (expression[i] == ')' && stack[top] != '(') || 
//                 (expression[i] == '}' && stack[top] != '{') || 
//                 (expression[i] == ']' && stack[top] != '[')) {
//                 return false;
//             } else {
//                 top--;
//             }
//         }
//     }

//     return top == -1;
// }

// int main() {
//     char expression[100];

//     printf("Enter an expression with parentheses: ");
//     fgets(expression, sizeof(expression), stdin);

//     // Remove newline character if present in the input
//     size_t len = strlen(expression);
//     if (len > 0 && expression[len - 1] == '\n') {
//         expression[len - 1] = '\0';
//     }

//     if (isValidParentheses(expression)) {
//         printf("The expression has valid parentheses.\n");
//     } else {
//         printf("The expression has invalid parentheses.\n");
//     }

//     return 0;
// }

