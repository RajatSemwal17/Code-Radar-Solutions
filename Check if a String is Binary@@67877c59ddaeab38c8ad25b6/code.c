#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s",name);
    for(int i=0;i<strlen(name);i++){
        char c = name[i]
        if(c=='1' && c=='0'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}