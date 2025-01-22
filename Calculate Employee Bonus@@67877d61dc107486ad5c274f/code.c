#include <stdio.h>

struct info{
    int X;
    char Y[30];
    float salary;
};

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].X,e[i].Y,&e[i].salary);
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: ",e[i].X,e[i].Y);
    }
    return 0;
}