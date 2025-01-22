#include <stdio.h>
#include <string.h>

int main() {
    char string[20];
    int vowel=0;
    scanf("%s",string);
    int len = strlen(string);
    for(int i=0;i<len;i++){
        char c = string[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            vowel++;
        }
    }
    printf("%d",vowel);
    return 0;
}