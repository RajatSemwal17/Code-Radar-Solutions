#include <stdio.h>

struct library{
    char Book[20];
    char Author[20];
    float price;
};

int main() {
    int n;
    scanf("%d",&n);
    struct library e[n];
    printf("Books above price %.2f:\n",maxPrice);
    for(int i=0;i<n;i++){
    scanf("%s %s %f",e[i].Book,e[i].Author,&e[i].price);

    float maxPrice;
    scanf("%f",&maxPrice);
        if(e[i].price > maxPrice){
        printf("Title: %s, Author: %s, Price: %.2f\n",e[correct].Book,e[correct].Author,e[correct].price);
        }
    }
    
    return 0;
}