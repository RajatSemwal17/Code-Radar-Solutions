#include <stdio.h>

int main() {
    char str[50];
    char name;
    scanf("%s",str);
    scanf("%c",&name);
    for(int i=0;i<n;i++){
        char c = str[i];
        if(c=='a' || c=='e' || c=='i' || c='o' || c=='u'){
            str[i] = name;
        }
    }
    printf("%s",str);
    return 0;
}