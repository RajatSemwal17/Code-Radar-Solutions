#include <stdio.h>
#include <string.h>

void ReverseString(char str[]){
    int len = strlen(str);
    char temp;
    for(int i=0;i<len/2;i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char str[30];
    scanf("%s",str);
    char name[] = ReverseString(str);
    if(str == name){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}