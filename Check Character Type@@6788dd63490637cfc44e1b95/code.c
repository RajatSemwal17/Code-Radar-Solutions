#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if((c>='a' && c<='z')){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else if(c>='0' && c<='9'){
        printf("Digit");
    }
    else if(c==' '){
        printf("Space");
    }
    else{
        printf("Special Character");
    }

    return 0;
}