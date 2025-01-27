#include <stdio.h>
#include <ctype.h>

int anaGrams(char str1[],char str2){
    int count[256] = {0};

    for(int i=0;str1[i]!='\0';i++){
        count[tolower(str1[i])]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count[tolower(str2[i])]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    if(anaGrams(str1,str2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}