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
    scanf("%s",name);
    scanf("%c",&one);
    scanf("%c",&two);

    printf("%s",modifyString(name,one,two));
    return 0;
}