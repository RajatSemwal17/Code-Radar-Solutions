#include <stdio.h>
#include <ctype.h>

int countWords(const char *str){
    int count = 0,word = 0;
    while(*str){
        if(isspace(*str)){
            word = 0;
        }
        else if(!word){
            word = 1;
            count++;
        }
    str++;
    }
    return count;
}

int main() {
    char str[70];
    fgets(str,sizeof(str),stdin);
    printf("%d",countWords(str));
    return 0;
}