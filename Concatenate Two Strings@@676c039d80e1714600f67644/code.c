#include <stdio.h>
#include <string.h>

int main() {
    char str1[30],str2[30];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    char a = strcat(str1,str2);
    printf("%s",a);

    return 0;
}