#include <stdio.h>

void removeSpaces(char name[]){
    int i,j=0;
    for(int i-0;name[i] != '\0',i++){
        if(str[i] == ' '){
            str[j++] = str[i];
        }
    }
    str[j]='\0';
}

int main() {
    char name[30];
    fgets(name,sizeof(name),stdin);
    removeSpaces(name);
    printf("%s",name);
    return 0;
}