#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
       printf("%d ",rows+1);
    }
    return 0;
}