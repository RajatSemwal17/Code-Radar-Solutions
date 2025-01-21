#include <stdio.h>

struct info{
    int number;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].number,e[i].name,&e[i].marks);
    }
    for(int i=0;i<n;i++){
        int sum = 0
        sum += e[i].marks;
        printf("%f",sum);
    }

    return 0;
}