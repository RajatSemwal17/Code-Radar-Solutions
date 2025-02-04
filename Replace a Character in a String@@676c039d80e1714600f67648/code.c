#include <stdio.h>
#include <string.h>

char modifyString(char name[],char one,char two){
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
    fgets(name,sizeof(name),stdin);
    // name[strcspn(name,"\n")] = '\0';
    scanf(" %c",&one);
    scanf(" %c",&two);
    modifyString(name,one,two);
    return 0;
}