#include <stdio.h>
#include <string.h>

int main() {
    char str1[30],str2[30];
    scanf("%s",str1);
    scanf("%s",str2);
    char a = strcat(str1,str2);
    printf("%s",a);

    return 0;
}