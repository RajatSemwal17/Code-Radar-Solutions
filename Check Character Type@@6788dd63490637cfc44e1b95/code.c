#include <stdio.h>

int main() {
    char c;
    scanf("%C",&c);
    if((c>='a' && c<='z')){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else if(c>='0' && c<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }

    return 0;
}