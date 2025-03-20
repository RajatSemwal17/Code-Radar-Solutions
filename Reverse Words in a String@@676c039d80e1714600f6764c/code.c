#include <stdio.h>
#include <string.h>
#include <ctype.h>

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



int main(){
    char name[30];
    char a;
    fgets(name,sizeof(name),stdin);
    scanf("%c",&a);
    reverseEachWord(name);
    printf("%s",name);
}