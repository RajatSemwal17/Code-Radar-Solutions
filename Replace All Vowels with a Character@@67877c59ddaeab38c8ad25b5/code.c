#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char name;
    // scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    scanf("%c",&name);
    for(int i=0;i<strlen(str);i++){
        char c = str[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            str[i] = name;
        }
    }
    printf("%s",str);
    return 0;
}