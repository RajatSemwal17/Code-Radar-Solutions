#include <stdio.h>
#include <string.h>

int binary(char name[]){
    for(int i=0;i<strlen(name);i++){
        char c = name[i];
        if(c!='1' && c!='0'){
            return 0;
        }
    }
    return 1;
}
int main() {
    char name[20];
    scanf("%s",name);
    printf("%s",binary(name) ? "Yes" : "No");
    return 0;
}