#include <stdio.h>

int main() {
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")] = '\0';
    printf("You entered: %s\n",string);
    return 0;
}