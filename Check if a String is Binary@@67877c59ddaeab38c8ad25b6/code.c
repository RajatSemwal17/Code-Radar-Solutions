#include <stdio.h>
#include <string.h>

int binary(char name[]){
    for(int i=0;i<strlen(name);i++){
        char c = name[i];
        if(c=='1' || c=='0'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}
int main() {
    char name[20];
    scanf("%s",name);
    binary(name);
    return 0;
}