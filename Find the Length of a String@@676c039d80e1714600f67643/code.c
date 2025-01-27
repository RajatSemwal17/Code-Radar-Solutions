#include<stdio.h>

int mystrlen(char name[]){
    int i=0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char name[30];
    scanf("%s",name);
    printf("%d",mystrlen(name));
    return 0;
}