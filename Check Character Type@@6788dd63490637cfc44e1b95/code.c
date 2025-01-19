#include <stdio.h>

int main() {
    char c;
    scanf("%d",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("Vowel");
    }
    else if(c>=0 && c<=9){
        printf("Digit");
    }
    else if(c==' '){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }

    return 0;
}