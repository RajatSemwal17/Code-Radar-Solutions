#include <stdio.h>

struct rectangle{
    int length;
    int breadth;
};

int main() {
    int n;
    scanf("%d",&n);
    struct rectangle e[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&e[i].length,&e[i].breadth);
    }

    for(int i=0;i<n;i++){
        Area = e[i].length * e[i].breadth;
        Perimeter = 2*(e[i].length + e[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i,Area,Perimeter);
    }
    return 0;
}