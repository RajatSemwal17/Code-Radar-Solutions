#include <stdio.h>
#include <string.h>

int main() {
    char string[20];
    int vowel=0;
    scanf("%s",string);
    for(int i=0;i<=strlen(string);i++){
        char c = string[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vowel++;
        }
    }
    printf("%d",vowel);
    return 0;
}