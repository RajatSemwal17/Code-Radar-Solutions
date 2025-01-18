#include <stdio.h>
#include<string.h>

int main() {
    char string[100];
    fgets(string,sizeof(string),stdin);
    //string[strcspn(string,"\n")] = '\0';
    printf("You entered: %s",string);
    return 0;
}