#include <stdio.h>
#include <string.h>

void ReverseString(char str[]){
    int len = strlen(str);
    char temp;
    for(int i=0;i<=len/2;i++){
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main() {
    char name[30];
    scanf("%s",name);
    ReverseString(name);
    printf("%s",name);

    return 0;
}