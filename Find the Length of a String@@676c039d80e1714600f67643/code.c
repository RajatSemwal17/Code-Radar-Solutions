#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int len = strlen(name);
    fgets(name,sizeof(name),stdin);
    printf("%d",len);
    return 0;
}