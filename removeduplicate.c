// char * removeDuplicateLetters(char * s){
//     int n = strlen(s) ;
//     int* digit = calloc(26, sizeof(int)) ;
//     for(int i = 0; i < n; i++)
//         digit[s[i]-'a']++ ;
    
//     bool* set = calloc(26, sizeof(bool)) ;
//     char* ans = malloc(n+1) ;
//     int a_idx = 0 ;
//     for(int i = 0; i < n; i++){
//         if(set[s[i]-'a']){
//             digit[s[i]-'a']-- ;
//             continue ;
//         }
//         while(a_idx > 0 && s[i] < ans[a_idx-1] && digit[ans[a_idx-1]-'a'] > 0){
//             set[ans[a_idx-1]-'a'] = false ;
//             a_idx-- ;
//         }
//         ans[a_idx] = s[i] ;
//         a_idx++ ;
//         digit[s[i]-'a']-- ;
//         set[s[i]-'a'] = true ;
//     }
//     ans[a_idx] = '\0' ;
//     return ans ;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *removeDuplicateLetters(char *s) {
    int n = strlen(s);
    int *digit = calloc(26, sizeof(int));
    for (int i = 0; i < n; i++)
        digit[s[i] - 'a']++;

    bool *set = calloc(26, sizeof(bool));
    char *ans = malloc(n + 1);
    int a_idx = 0;
    for (int i = 0; i < n; i++) {
        if (set[s[i] - 'a']) {
            digit[s[i] - 'a']--;
            continue;
        }
        while (a_idx > 0 && s[i] < ans[a_idx - 1] && digit[ans[a_idx - 1] - 'a'] > 0) {
            set[ans[a_idx - 1] - 'a'] = false;
            a_idx--;
        }
        ans[a_idx] = s[i];
        a_idx++;
        digit[s[i] - 'a']--;
        set[s[i] - 'a'] = true;
    }
    ans[a_idx] = '\0';
    return ans;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Removing '\n' character from input if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    char *result = removeDuplicateLetters(input);
    printf("String after removing duplicate letters: %s\n", result);

    // Freeing dynamically allocated memory
    free(result);

    return 0;
}
