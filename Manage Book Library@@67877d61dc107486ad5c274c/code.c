#include <stdio.h>

struct library{
    char Book[20];
    char Author[20];
    int price;
};

int main() {
    int n;
    scanf("%d",&n);
    struct library e[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",e[i].Book,e[i].Author,&e[i].price);
    }
    return 0;
}