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
        float Area = e[i].length * e[i].breadth;
        float Perimeter = 2*(e[i].length + e[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,Area,Perimeter);
    }
    return 0;
}