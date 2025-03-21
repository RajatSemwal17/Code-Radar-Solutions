#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name,sizeof(name),stdin);
    int k=0;
    int i=0;
    while(name[i]!='\0'){
        char c = islower(str[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            name[k++] = name[i];
        }
        i++;
    }
    str[k] = '\0';
    printf("%s",name);
    return 0;
}