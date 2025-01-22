#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    scanf("%s",name);
    int len = strlen(name);
    printf("%d",len-1);
    return 0;
}