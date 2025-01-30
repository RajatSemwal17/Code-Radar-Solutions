#include <stdio.h>
#include <string.h>

void modifyString(char *name,char one,char two){
    for(int i=0;name[i] != '\0';i++){
        if(name[i] == one){
            name[i] = two;
        }
    }
    printf("%s",name);

}

int main() {
    char name[30];
    char one;
    char two;
    scanf("%s",name);
    scanf("%c",&one);
    scanf("%c",&two);
    modifyString(name,one,two);
    return 0;
}