#include<stdio.h>

int strlen(char *name[]){
    int i==0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char name[30];
    scanf("%s",name);
    printf("%d",strlen(name));
    return 0;
}