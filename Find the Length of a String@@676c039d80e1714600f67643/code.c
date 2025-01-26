#include <stdio.h>
#include <string.h>

int strlen(const char name[]){
    int i=0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    char name[30];
    // fgets(name,sizeof(name),stdin);
    scanf("%d",strlen(name));
    printf("%d",strlen(name));
    return 0;
}