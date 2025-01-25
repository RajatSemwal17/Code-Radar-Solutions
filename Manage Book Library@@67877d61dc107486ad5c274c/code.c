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
        scanf("%s %s %f",e[i].Book,e[i].Author,&e[i].price);

        scanf("%f",&maxPrice);
        if(e[i].price > maxPrice){
            correct=i;
        }
    }
    printf("Books above price %.2f",maxPrice);
    for(int i=0;i<n;i++){
        printf("\nTitle: %s, Author: %s, Price: %.2f\n",e[correct].Book,e[correct].Author,e[correct].price);
    
    }
    return 0;
}