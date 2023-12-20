// struct stack 
// {
//     int top;
//     int capacity;
//     int *array;
// };

// struct stack *createstack(int capacity) 
// {
//     struct stack *stack = (struct stack*)malloc(sizeof(struct stack));
//     stack->capacity = capacity;
//     stack->top = -1;
//     stack->array = (int *)malloc(stack->capacity * sizeof(int));
//     return (stack);
// }

// int isempty(struct stack *stack)
// {
//     if (stack->top == -1)
//         return (1);
//     return (0);
// }

// int pop(struct stack *stack)
// {
//     if (isempty(stack) == 1)
//         return (-1);
//     return
//         stack->array[stack->top--];
// }

// void    push(struct stack *stack, int pos)
// {
//     stack->array[++stack->top] = pos;
// }

// int longestValidParentheses(char *s)
// {
//     struct stack *stack = createstack(strlen(s) + 1);
//     unsigned maxlen = 0;
//     unsigned i = 0;
//     push(stack, -1);
//     while (i < strlen(s))
//     {
//         if (s[i] == '(')
//             push(stack, i);
//         else if (s[i] == ')')
//         {
//             if (!isempty(stack))
//                 pop(stack);
//             if (isempty(stack))
//                 push(stack, i);
//             {
//                 unsigned currLen = i - stack->array[stack->top];
//                 maxlen = currLen > maxlen ? currLen : maxlen;
//             }   
//         }
//         i++;
//     }
//     free (stack->array);
//     free (stack);
//     return (maxlen);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack 
{
    int top;
    int capacity;
    int *array;
};

struct stack *createstack(int capacity) 
{
    struct stack *stack = (struct stack*)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return (stack);
}

int isempty(struct stack *stack)
{
    if (stack->top == -1)
        return (1);
    return (0);
}

int pop(struct stack *stack)
{
    if (isempty(stack) == 1)
        return (-1);
    return stack->array[stack->top--];
}

void push(struct stack *stack, int pos)
{
    stack->array[++stack->top] = pos;
}

int longestValidParentheses(char *s)
{
    struct stack *stack = createstack(strlen(s) + 1);
    unsigned maxlen = 0;
    unsigned i = 0;
    push(stack, -1);
    while (i < strlen(s))
    {
        if (s[i] == '(')
            push(stack, i);
        else if (s[i] == ')')
        {
            if (!isempty(stack))
                pop(stack);
            if (isempty(stack))
            {
                push(stack, i);
            }
            else
            {
                unsigned currLen = i - stack->array[stack->top];
                maxlen = currLen > maxlen ? currLen : maxlen;
            }   
        }
        i++;
    }
    free(stack->array);
    free(stack);
    return (maxlen);
}

int main() {
    char input[100];
    printf("Enter a string containing parentheses: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    int result = longestValidParentheses(input);
    printf("Length of the longest valid parentheses substring: %d\n", result);

    return 0;
}
