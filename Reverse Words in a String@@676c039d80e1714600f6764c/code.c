#include <stdio.h>
#include <string.h>

char ReverseString(char input[]){
    char temp;
    int len = strlen(input)
    for(int i=0;i<len/2;i++){
        temp = input[i];
        input[i] = input[len-i-1];
        input[len-i-1] = temp;
    }
}

int main() {
    char input[30],input2[30];
    scanf("%s %s",input,input2);
    ReverseString(input);
    printf("%s",input);
    return 0;
}