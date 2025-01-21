#include <stdio.h>

struct info{
    int X;
    char Y[30];
    float Z;
};

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].X,e[i].Y,&e[i].Z);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",e[i].X,e[i].Y,e[i].Z);
    }
    return 0;
}