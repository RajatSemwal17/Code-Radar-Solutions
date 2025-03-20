#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char input[]) {
    int len = strlen(input);
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (input[i] == ' ' || input[i] == '\0') {  // Found word boundary
            reverseWord(&input[start], &input[i - 1]);
            start = i + 1;  // Move to next word
        }
    }
}

int main() {
    char name[30];
    char a;
    
    // Read the full line
    
    fgets(name, sizeof(name), stdin);
    
    // Remove trailing newline from fgets()
    name[strcspn(name, "\n")] = '\0';
    
    // Read a single character
    
    scanf(" %c", &a);  // Adding space before %c to ignore the newline
    
    reverseEachWord(name);
    
    printf("%s", name);
    return 0;
}
