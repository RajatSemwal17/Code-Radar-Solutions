#include <stdio.h>

struct info{
    int number;
    char name[100];
    float marks;
};

int main() {
    int n;
    float sum=0;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].number,e[i].name,&e[i].marks);
        sum += e[i].marks;
    }
    float avg = sum/n;
    printf("Average Marks: %.2f",avg);

    return 0;
}