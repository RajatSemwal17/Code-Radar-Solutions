#include <stdio.h>

char modifyString(char name[],char one,char two){
    for(int i=0;name[i] != '\0';i++){
        if(name[i] == one){
            name[i] = two;
        }
    }
}

int main() {
    char name[30] , one , two;
    fgets(name,sizeof(name),stdin);
    scanf("%c",&one);
    scanf("%c",&two);
    modifyString(name,one,two);
    printf("%s",name);
    return 0;
}