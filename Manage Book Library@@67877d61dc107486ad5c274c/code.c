#include <stdio.h>

struct library{
    char Book[20];
    char Author[20];
    float price;
};

int main() {
    int n;
    float maxPrice;
    int correct=0;
    scanf("%d",&n);
    struct library e[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",e[i].Book,e[i].Author,&e[i].price);

        scanf("%f",&maxPrice);
        if(e[i].price > maxPrice){
            correct=1;
        }
    }
    for(int i=0;i<n;i++){
    if(correct){
        printf("Books above price %.2f: Title: %s, Author: %s, Price: %.2f",maxPrice,e[i].Book,e[i].Author,e[i].price);
    }}
    return 0;
}