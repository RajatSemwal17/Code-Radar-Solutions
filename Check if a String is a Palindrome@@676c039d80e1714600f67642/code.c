#include <stdio.h>
#include <string.h>

int ReverseString(char str[]){
    int len = strlen(str);
    char temp;
    for(int i=0;i<len/2;i++){
        if(str[i] != str[len-i-1]){
            return 0;
        }
        
    }
    return 1;
}

int main() {
    char str[30];
    scanf("%s",str);
    if(ReverseString(str)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}