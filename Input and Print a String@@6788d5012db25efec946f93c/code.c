#include <stdio.h>

int main() {
    char a;
    fgets(a,sizeof(a),stdin);
    printf("You entered: %s",a);
    return 0;
}