#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    int len = strlen(name);
    printf("%d",len);
    return 0;
}