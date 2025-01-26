#include <stdio.h>

int strlen(const char name[]){
    int count=0;
    while(name[count] != '\0'){
        count++;
    }
    return count;
}

int main() {
    char name[30];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    printf("%d",strlen(name));
    return 0;
}