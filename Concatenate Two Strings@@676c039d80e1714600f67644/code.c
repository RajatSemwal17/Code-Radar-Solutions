#include <stdio.h>
#include <string.h>

int main() {
    char str1[30],str2[30];
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';
    strcat(str1,str2);
    printf("%s%s",str1,str2);

    return 0;
}