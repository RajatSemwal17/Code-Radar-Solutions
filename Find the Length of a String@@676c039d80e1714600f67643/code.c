#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int len = strlen(name);
    scanf("%s",name);
    printf("%d",len-1);
    return 0;
}