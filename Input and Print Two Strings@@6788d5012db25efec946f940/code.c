#include <stdio.h>

int main() {
    char string[100];
    fgets(string,sizeof(string),stdin);
    printf("You entered: %s\n",string);
    return 0;
}